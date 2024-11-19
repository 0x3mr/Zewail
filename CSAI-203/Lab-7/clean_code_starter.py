# Constants for default values
DISCOUNT_THRESHOLD = 10
DISCOUNT_RATE = 0.1

def calculate_value(quantity, price):
    """Calculate the total value for a given quantity and price."""
    return quantity * price

def calculate_discounted_value(quantity, price):
    """Apply discount if quantity exceeds the threshold, otherwise return regular value."""
    total_value = calculate_value(quantity, price)
    if quantity > DISCOUNT_THRESHOLD:
        discount = total_value * DISCOUNT_RATE
        return total_value - discount
    return total_value

def display_inventory_summary(name, quantity, price):
    """Display the summary for each inventory item, including potential discount."""
    total_value = calculate_value(quantity, price)
    discounted_value = calculate_discounted_value(quantity, price)
    discount_message = f" (Discounted to ${discounted_value:.2f})" if discounted_value < total_value else ""
    print(f"{name} - Quantity: {quantity}, Price per item: ${price}, Total value: ${total_value:.2f}{discount_message}")

def display_total_inventory_value(items):
    """Calculate and display the total inventory value with discounts applied."""
    total_value = sum(calculate_discounted_value(item["quantity"], item["price"]) for item in items)
    print(f"Total inventory value (with discounts if applicable): ${total_value:.2f}")

# Inventory list with structured data for each product
inventory_items = [
    {"name": "Laptop", "quantity": 10, "price": 800},
    {"name": "Phone", "quantity": 20, "price": 500},
    {"name": "Tablet", "quantity": 15, "price": 300},
    {"name": "Monitor", "quantity": 8, "price": 150},
    {"name": "Keyboard", "quantity": 50, "price": 20}
]

# Display individual item summaries
for item in inventory_items:
    display_inventory_summary(item["name"], item["quantity"], item["price"])

# Display total inventory value
display_total_inventory_value(inventory_items)