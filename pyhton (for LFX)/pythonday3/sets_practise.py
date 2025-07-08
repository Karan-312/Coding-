items = input("Enter items separated by space: ").split()
seen = set()
duplicates = set()

for item in items:
    if item in seen:
        duplicates.add(item)
    else:
        seen.add(item)

print("\nDuplicate items:", duplicates)
