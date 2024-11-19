
    def inv_summary(n, q, p):
        v = q * p
        if q > 10:
            v -= v * 0.1  # Apply discount if quantity > 10
        print(n + " has " + str(q) + " items, each costing $" + str(p) + ". Total value: $" + str(v))

    products = [{"name": "Laptop", "quantity": 10, "price": 800},
                {"name": "Phone", "quantity": 20, "price": 500},
                {"name": "Tablet", "quantity": 15, "price": 300},
                {"name": "Monitor", "quantity": 8, "price": 150},
                {"name": "Keyboard", "quantity": 50, "price": 20}]

    # Display inventory summary for each item
    for i in products:
        inv_summary(i["name"], i["quantity"], i["price"])

    # Calculate total discounted inventory value consistently
    total_value = 0
    for i in products:
        total_value += (i["quantity"] * i["price"]) if i["quantity"] < 10 else (i["quantity"] * i["price"]) - (i["quantity"] * i["price"] * 0.1)

    print("Total inventory value with discounts applied: $" + str(total_value))