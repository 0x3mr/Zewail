import os
import time
import logging
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.firefox.service import Service
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.common.exceptions import (
    TimeoutException, 
    NoSuchElementException, 
    WebDriverException,
    ElementNotInteractableException
)
from webdriver_manager.firefox import GeckoDriverManager




os.system('cls' if os.name == 'nt' else 'clear')




logging.basicConfig(
    level=logging.INFO, 
    format='%(asctime)s - %(levelname)s - %(message)s'
)
web_scraper_logger = logging.getLogger(__name__)




def setup_web_browser():
    """
    Set up and configure Firefox WebDriver for web scraping.
    
    Returns:
        webdriver.Firefox: Configured Firefox WebDriver
    """
    try:
        # Use WebDriver Manager to handle driver installation
        browser_service = Service(GeckoDriverManager().install())
        
        # Create browser options
        browser_options = webdriver.FirefoxOptions()
        
        # Uncomment the following line if running in a headless environment
        # browser_options.add_argument('-headless')
        
        # Initialize the WebDriver
        web_browser = webdriver.Firefox(service=browser_service, options=browser_options)
        
        # Maximize browser window for better visibility
        web_browser.maximize_window()
        
        return web_browser
    except Exception as setup_error:
        web_scraper_logger.error(f"Browser setup failed: {setup_error}")
        raise




def perform_product_search(web_browser, search_query):
    """
    Search for a product on Amazon.
    
    Args:
        web_browser (webdriver.Firefox): Configured WebDriver
        search_query (str): Product to search for
    
    Returns:
        bool: True if search is successful, False otherwise
    """
    try:
        # Navigate to Amazon
        web_browser.get('https://www.amazon.eg')
        web_scraper_logger.info("Navigated to Amazon")
        
        # Define possible search bar locators
        search_bar_locators = [
            (By.ID, 'twotabsearchtextbox'),
            (By.NAME, 'field-keywords'),
            (By.CSS_SELECTOR, 'input[type="text"][name="field-keywords"]')
        ]
        
        # Find the search bar
        search_bar = None
        for locator in search_bar_locators:
            try:
                search_bar = WebDriverWait(web_browser, 10).until(
                    EC.presence_of_element_located(locator)
                )
                break
            except TimeoutException:
                continue
        
        if not search_bar:
            web_scraper_logger.error("Could not find search bar")
            return False
        
        # Perform search
        search_bar.clear()
        search_bar.send_keys(search_query)
        search_bar.send_keys(Keys.RETURN)
        web_scraper_logger.info(f"Searched for: {search_query}")
        
        # Wait for search results
        search_result_locators = [
            (By.CSS_SELECTOR, 'div[data-component-type="s-search-result"]'),
            (By.CSS_SELECTOR, 'div[data-cel-widget^="search_result_"]'),
            (By.XPATH, '//div[contains(@class, "s-result-item")]')
        ]
        
        for locator in search_result_locators:
            try:
                WebDriverWait(web_browser, 10).until(
                    EC.presence_of_element_located(locator)
                )
                web_scraper_logger.info("Search results loaded")
                return True
            except TimeoutException:
                continue
        
        web_scraper_logger.error("Could not find search results")
        return False
    
    except Exception as search_error:
        web_scraper_logger.error(f"Search process failed: {search_error}")
        return False




def extract_first_product_details(web_browser):
    """
    Extract details of the first product from search results.
    
    Args:
        web_browser (webdriver.Firefox): Configured WebDriver
    
    Returns:
        dict: Product details including title, URL, price, and rating
    """
    product_info = {
        'title': 'Not Available',
        'url': 'Not Available',
        'price': 'Not Available',
        'rating': 'Not Available'
    }
    
    try:
        # Define product link locators with multiple strategies
        product_link_locators = [
            (By.XPATH, '(//div[contains(@data-component-type, "s-search-result")]//a[@class="a-link-normal"])[1]'),
            (By.CSS_SELECTOR, 'div[data-component-type="s-search-result"] h2 a'),
            (By.CSS_SELECTOR, 'a.s-image')
        ]
        
        # Find and interact with the first product link
        first_product_link = None
        for locator in product_link_locators:
            try:
                # Use JavaScript to scroll and click
                first_product_link = WebDriverWait(web_browser, 10).until(
                    EC.presence_of_element_located(locator)
                )
                
                # Store URL before clicking
                product_info['url'] = first_product_link.get_attribute('href')
                
                # Use JavaScript to scroll and click
                web_browser.execute_script("arguments[0].scrollIntoView(true);", first_product_link)
                web_browser.execute_script("arguments[0].click();", first_product_link)
                
                web_scraper_logger.info("Clicked on first product")
                break
            except (TimeoutException, ElementNotInteractableException):
                continue
        
        # Switch to the new tab if opened
        web_browser.switch_to.window(web_browser.window_handles[-1])
        
        # Extract product title
        title_locators = [
            (By.ID, 'productTitle'),
            (By.CSS_SELECTOR, 'h1.a-size-large.a-spacing-none'),
            (By.XPATH, '//h1[@id="title"]')
        ]
        
        for locator in title_locators:
            try:
                title_element = WebDriverWait(web_browser, 10).until(
                    EC.presence_of_element_located(locator)
                )
                product_info['title'] = title_element.text.strip()
                web_scraper_logger.info(f"Product title: {product_info['title']}")
                break
            except TimeoutException:
                continue
        
        # Extract price
        price_locators = [
            (By.CSS_SELECTOR, '.a-price-whole'),
            (By.CSS_SELECTOR, 'span.a-price-whole'),
            (By.CSS_SELECTOR, 'span.a-price'),
            (By.XPATH, '//span[contains(@class, "a-price-whole")]')
        ]
        
        for locator in price_locators:
            try:
                price_element = web_browser.find_element(locator[0], locator[1])
                product_info['price'] = price_element.text.strip()
                web_scraper_logger.info(f"Product price: {product_info['price']}")
                break
            except NoSuchElementException:
                continue
        
        # Extract rating
        rating_locators = [
            (By.CSS_SELECTOR, 'span.a-icon-alt'),
            (By.XPATH, '//span[contains(@class, "a-icon-alt") and contains(text(), "out of 5 stars")]'),
            # Add more potential locators
            (By.CSS_SELECTOR, 'i.a-icon.a-icon-star-medium'),
            (By.CSS_SELECTOR, 'span[data-hook="rating-out-of-text"]')
        ]
        
        for locator in rating_locators:
            try:
                rating_element = web_browser.find_element(locator[0], locator[1])
                product_info['rating'] = rating_element.text.strip()
                web_scraper_logger.info(f"Product rating: {product_info['rating']}")
                break
            except NoSuchElementException:
                continue
        
        return product_info
    
    except Exception as detail_error:
        web_scraper_logger.error(f"Failed to extract product details: {detail_error}")
        return product_info




def capture_webpage_screenshot(web_browser, filename='product_page_screenshot.png'):
    """
    Capture a screenshot of the current webpage.
    
    Args:
        web_browser (webdriver.Firefox): Configured WebDriver
        filename (str, optional): Name of the screenshot file
    
    Returns:
        bool: True if screenshot is successful, False otherwise
    """
    try:
        # Ensure the directory exists
        os.makedirs(os.path.dirname(os.path.abspath(filename)), exist_ok=True)
        
        # Take and save screenshot
        web_browser.save_screenshot(filename)
        web_scraper_logger.info(f"Screenshot saved as {filename}")
        return True
    except Exception as screenshot_error:
        web_scraper_logger.error(f"Screenshot capture failed: {screenshot_error}")
        return False




def main():
    """
    Automate web interactions using Selenium
    in Python. The task is to create a Python script that opens a website, searches for a product,
    extracts relevant details from the product page, and saves a screenshot of the page.
    """

    web_browser = None

    try:
        web_browser = setup_web_browser()
        
        search_term = "Laptop"

        if perform_product_search(web_browser, search_term):
            # Extract product details
            product_details = extract_first_product_details(web_browser)
            
            # Print product details
            web_scraper_logger.info("Product Details:")
            for key, value in product_details.items():
                web_scraper_logger.info(f"{key.capitalize()}: {value}")
            
            # Capture screenshot
            capture_webpage_screenshot(web_browser)
        
    except Exception as main_error:
        web_scraper_logger.error(f"An unexpected error occurred: {main_error}")
    
    finally:
        # Add a short delay before closing
        time.sleep(3)
        # Close the browser
        if web_browser:
            web_browser.quit()




if __name__ == '__main__':
    main()