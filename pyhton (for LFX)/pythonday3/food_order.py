orders = []

while True:
    name = input("Enter food item (or 'q' to quit): ")
    if name.lower() == 'q':
        break
    price = float(input(f"Enter price for {name}: "))
    orders.append((name, price))  # Store as tuple

print("\nYour Order:")
for item in orders:
    print(f"{item[0]} : ${item[1]}")
