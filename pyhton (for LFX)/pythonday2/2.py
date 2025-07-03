# # name = input("enter you full name : ")

# phone_number = input("enter your phone number ")
# # result = len(name)

# # result = name.find("l")
# # result = name.rfind("a")
# # name = name.capitalize()
# # name = name.upper()
# # name = name.lower()
# # result = name.isdigit()

# # result = phone_number.count("-")
# # # result = name.isalpha()

# phone_number = phone_number.replace("-", " ")
# print(phone_number)

user_name = input(" enter you username ")

result = len(user_name)

if (result > 12 ):

    print("your usernmae cant be more than 12 characters ")
    
elif not user_name.find(" ")==-1:
    print("you username cant have spaces ")
    
elif not user_name.isalpha():
    
    print(f"your username :: {user_name} cant have numerics and spaces ")

else:
    print(f"welcome  ")