import sqlite3

# Connect to the database (or create it if it doesn't exist)
conn = sqlite3.connect('crm.db')
cursor = conn.cursor()

# Create a table for customer data
cursor.execute('''
CREATE TABLE IF NOT EXISTS customers (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    email TEXT NOT NULL,
    purchase_history TEXT
)
''')

# Function to add a customer
def add_customer(name, email, purchase_history):
    cursor.execute('''
    INSERT INTO customers (name, email, purchase_history)
    VALUES (?, ?, ?)
    ''', (name, email, purchase_history))
    conn.commit()

# Function to retrieve a customer by email
def get_customer_by_email(email):
    cursor.execute('SELECT * FROM customers WHERE email = ?', (email,))
    return cursor.fetchone()

# Add a customer
add_customer("Alice", "alice@example.com", "Laptop, Smartphone")

# Retrieve the customer by email
print(get_customer_by_email("alice@example.com"))

# Close the connection
conn.close()
