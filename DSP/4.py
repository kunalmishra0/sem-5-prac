print("[REDACTED] [REDACTED]")

# Raw customer transaction data

# List: transaction amounts
amounts = [1250, 850, 2100, 1750, 850, 3200]

# Tuple: one fixed transaction record
transaction = ("T105", "C103", "Electronics", 2100)

# List of tuples: collection of raw records
transactions = [
    ("T101", "C101", "Electronics", 1250),
    ("T102", "C102", "Clothing", 850),
    ("T103", "C103", "Electronics", 2100),
    ("T104", "C104", "Grocery", 1750),
    ("T105", "C102", "Clothing", 850),
    ("T106", "C105", "Electronics", 3200)
]

# Dictionary: map customer ID to total spending
customer_spending = {}

for record in transactions:
    customer = record[1]
    amount = record[3]
    customer_spending[customer] = \
        customer_spending.get(customer, 0) + amount

# Set: find unique product categories
categories = set(record[2] for record in transactions)

# List: filter high-value transactions
high_value = [
    record for record in transactions
    if record[3] > 1500
]

# Display results
print("\nTransaction Record:", transaction)

print("\nUnique Product Categories:")
print(categories)

print("\nHigh-Value Transactions:")
for record in high_value:
    print(record)

print("\nCustomer-wise Total Spending:")
for customer, amount in customer_spending.items():
    print(customer, ":", amount)

print("\nTotal Transactions:", len(transactions))
print("Total Sales:", sum(amounts))
print("Average Transaction:", sum(amounts) / len(amounts))
