import os
import time
import logging
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.firefox.service import Service
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.common.exceptions import (TimeoutException, NoSuchElementException, WebDriverException, ElementNotInteractableException)
from webdriver_manager.firefox import GeckoDriverManager

os.system('cls' if os.name == 'nt' else 'clear')

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
amazon_logger = logging.getLogger(__name__)

def init_amazon_driver():
    try:
        amazon_service = Service(GeckoDriverManager().install())
        amazon_options = webdriver.FirefoxOptions()
        amazon_browser = webdriver.Firefox(service=amazon_service, options=amazon_options)
        amazon_browser.maximize_window()
        return amazon_browser
    except Exception as init_error:
        amazon_logger.error(f"Browser setup failed: {init_error}")
        raise

def execute_amazon_search(amazon_browser, item_query):
    try:
        amazon_browser.get('https://www.amazon.eg')
        amazon_logger.info("Navigated to Amazon")
        search_input_locators = [(By.ID, 'twotabsearchtextbox'),(By.NAME, 'field-keywords'),(By.CSS_SELECTOR, 'input[type="text"][name="field-keywords"]')]
        search_input = None
        for locator in search_input_locators:
            try:
                search_input = WebDriverWait(amazon_browser, 10).until(EC.presence_of_element_located(locator))
                break
            except TimeoutException:
                continue
        if not search_input:
            amazon_logger.error("Could not find search bar")
            return False
        search_input.clear()
        search_input.send_keys(item_query)
        search_input.send_keys(Keys.RETURN)
        amazon_logger.info(f"Searched for: {item_query}")
        results_locators = [(By.CSS_SELECTOR, 'div[data-component-type="s-search-result"]'),(By.CSS_SELECTOR, 'div[data-cel-widget^="search_result_"]'),(By.XPATH, '//div[contains(@class, "s-result-item")]')]
        for locator in results_locators:
            try:
                WebDriverWait(amazon_browser, 10).until(EC.presence_of_element_located(locator))
                amazon_logger.info("Search results loaded")
                return True
            except TimeoutException:
                continue
        amazon_logger.error("Could not find search results")
        return False
    except Exception as search_error:
        amazon_logger.error(f"Search process failed: {search_error}")
        return False

def extract_item_details(amazon_browser):
    item_data = {'title': 'Not Available','url': 'Not Available','price': 'Not Available','rating': 'Not Available'}
    try:
        item_locators = [(By.XPATH, '(//div[contains(@data-component-type, "s-search-result")]//a[@class="a-link-normal"])[1]'),(By.CSS_SELECTOR, 'div[data-component-type="s-search-result"] h2 a'),(By.CSS_SELECTOR, 'a.s-image')]
        first_item = None
        for locator in item_locators:
            try:
                first_item = WebDriverWait(amazon_browser, 10).until(EC.presence_of_element_located(locator))
                item_data['url'] = first_item.get_attribute('href')
                amazon_browser.execute_script("arguments[0].scrollIntoView(true);", first_item)
                amazon_browser.execute_script("arguments[0].click();", first_item)
                amazon_logger.info("Clicked on first product")
                break
            except (TimeoutException, ElementNotInteractableException):
                continue
        amazon_browser.switch_to.window(amazon_browser.window_handles[-1])
        title_locators = [(By.ID, 'productTitle'),(By.CSS_SELECTOR, 'h1.a-size-large.a-spacing-none'),(By.XPATH, '//h1[@id="title"]')]
        for locator in title_locators:
            try:
                title_element = WebDriverWait(amazon_browser, 10).until(EC.presence_of_element_located(locator))
                item_data['title'] = title_element.text.strip()
                amazon_logger.info(f"Product title: {item_data['title']}")
                break
            except TimeoutException:
                continue
        price_locators = [(By.CSS_SELECTOR, '.a-price-whole'),(By.CSS_SELECTOR, 'span.a-price-whole'),(By.CSS_SELECTOR, 'span.a-price'),(By.XPATH, '//span[contains(@class, "a-price-whole")]')]
        for locator in price_locators:
            try:
                price_element = amazon_browser.find_element(locator[0], locator[1])
                item_data['price'] = price_element.text.strip()
                amazon_logger.info(f"Product price: {item_data['price']}")
                break
            except NoSuchElementException:
                continue
        rating_locators = [(By.CSS_SELECTOR, 'span.a-icon-alt'),(By.XPATH, '//span[contains(@class, "a-icon-alt") and contains(text(), "out of 5 stars")]'),(By.CSS_SELECTOR, 'i.a-icon.a-icon-star-medium'),(By.CSS_SELECTOR, 'span[data-hook="rating-out-of-text"]')]
        for locator in rating_locators:
            try:
                rating_element = amazon_browser.find_element(locator[0], locator[1])
                item_data['rating'] = rating_element.text.strip()
                amazon_logger.info(f"Product rating: {item_data['rating']}")
                break
            except NoSuchElementException:
                continue
        return item_data
    except Exception as detail_error:
        amazon_logger.error(f"Failed to extract product details: {detail_error}")
        return item_data

def save_page_screenshot(amazon_browser, filename='amazon_product_screenshot.png'):
    try:
        os.makedirs(os.path.dirname(os.path.abspath(filename)), exist_ok=True)
        amazon_browser.save_screenshot(filename)
        amazon_logger.info(f"Screenshot saved as {filename}")
        return True
    except Exception as screenshot_error:
        amazon_logger.error(f"Screenshot capture failed: {screenshot_error}")
        return False

def main():
    amazon_browser = None
    try:
        amazon_browser = init_amazon_driver()
        search_item = "Laptop"
        if execute_amazon_search(amazon_browser, search_item):
            item_details = extract_item_details(amazon_browser)
            amazon_logger.info("Product Details:")
            for key, value in item_details.items():
                amazon_logger.info(f"{key.capitalize()}: {value}")
            save_page_screenshot(amazon_browser)
    except Exception as main_error:
        amazon_logger.error(f"An unexpected error occurred: {main_error}")
    finally:
        time.sleep(3)
        if amazon_browser:
            amazon_browser.quit()

if __name__ == '__main__':
    main()