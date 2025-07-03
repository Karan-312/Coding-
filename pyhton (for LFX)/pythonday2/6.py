#while loops 

# age = int(input("enter your age "))

# while age <0 :
#     print("age cant be negaetive ")
#     age = int(input("enter your age "))
    
# print(f"you are {age} year old ")

# food = input("enter a food you like to eat (q to quit ): ")

# while not food == "q":
   
#     print(f"you like {food}")
#     food = input("enter another food you like (q to quit): ")

# print("bye")

number = int(input("enter a number between 1 to 10 :: "))

while number < 1 or number > 10:
    print(f"the {number} is not valid")
    number = int(input("enter a number between 1 to 10 :: "))

print("thank you for providing a number ")    