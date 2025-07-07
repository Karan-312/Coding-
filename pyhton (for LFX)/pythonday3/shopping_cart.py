

foods  =[]
prices  =[]
total = 0


while True :
    food = input("enter the food to buy (q to quit) : ")
    
    if food.lower() == "q":
        break
    else:
        price = float(input (f"enter the price of {food} :$"))
        foods.append(food)
        prices.append(price)


print("------ your cart ---------")
for food , price in zip(foods,prices):
    print(f"{food} : ${price:}")

print()

for price in prices :
    total  = total + price

print(f"the total price of yor shooping cart is {total}")