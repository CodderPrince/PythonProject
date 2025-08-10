# Initialize the hash table with product information
products = {
    "001": {"name": "Laptop", "price": 999.99},
    "002": {"name": "Smartphone", "price": 499.99},
    "003": {"name": "Tablet", "price": 299.99}
}

# Function to retrieve product information by ID


def get_product_info(product_id):
    return products.get(product_id, "Product not found")


# Retrieve information for product ID "001"
print(get_product_info("001"))
