#SIMPLE CALC.

user_choice = input("enter the operator you want to work with : + , - , * , /  --> ")

if user_choice not in ["+","-","*","/"]:
    print(f"the {user_choice} is not a valid opererator ") 
    
elif user_choice == "+":
    num1 = float(input("enter the first number you want to work with : "))
    num2 = float(input("enter the second number you want to work with  : "))
    result = num1 + num2
    print(result)
elif user_choice == "-":
    num1 = float(input("enter the first number you want to work with : "))
    num2 = float(input("enter the second number you want to work with  : "))
    result =num1 - num2 
    print(result)
elif user_choice == "*":
    num1 = float(input("enter the first number you want to work with : "))
    num2 = float(input("enter the second number you want to work with  : "))
    result = num1*num2
    print(result)
elif user_choice == "/":
    num1 = float(input("enter the first number you want to work with : "))
    num2 = float(input("enter the second number you want to work with  : "))
    result = num1/num2
    print(result)
