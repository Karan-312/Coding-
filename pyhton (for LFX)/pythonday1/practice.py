# #SIMPLE CALC.

# user_choice = input("enter the operator you want to work with : + , - , * , /  --> ")


    

# num1 = float(input("enter the first number you want to work with : "))
# num2 = float(input("enter the second number you want to work with  : "))

# if user_choice == "+":
#     result = num1 + num2
#     print(result)
# elif user_choice == "-":
#     result =num1 - num2 
#     print(result)
# elif user_choice == "*":
#     result = num1*num2
#     print(result)
# elif user_choice == "/":
#     result = num1/num2
#     print(result)
# else:
#     print(f"the {user_choice} is an invalid operator")

weight = float(input("enter your weigth"))
unit = input("kilograms or pounds? (K or L)")

if unit  == "K":
    weight = weight *2.2
    unit  = "Lbs"
elif unit == "L":
    weight = weight /2.2
    unit = "Kgs"
else:
    print(f"{unit} was not valid ")
    
print(f"your  weigth is :{weight} {unit}")