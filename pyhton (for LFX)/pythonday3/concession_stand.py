
menu = {"pizza" : 2.99,
        "chips" : 1.45,
        "fries" : 1.00,
        "burgers" : 3.00}

# print(dir(menu))

user_bill = []
total = 0

print("------ THE MENU ------")

for x,y in  menu.items() :
    print(f"{x:10} -> ${y}")
    
print("---------END---------")

choice = input("enter the food you want to order : ")

while True :
    food = input(" enter the food item you want to order (q to quit ) : ").lower()
    if food == "q" :
        break
    elif menu.get(food) is not None :
        user_bill.append(food)
        
print("---------------------- YOUR BILL ----------")        
for food in user_bill :
    total = (total + menu.get(food))
    print(food ,end= " ") 
    
print()       

print(f"total is : ${total}")

