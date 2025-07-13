#MEMBERSHIP OPERATORS 
# IN
# NOT IN 

word = "APPLE"

letter = input("guess  a letter in the secret word: ").upper()

if letter in word :         # you can use not in and flip the if-else loop
    print(f"there is a {letter}")
else:
    print(f"{letter} was not found ")
    
    