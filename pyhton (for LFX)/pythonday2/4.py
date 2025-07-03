#email slicer

email = input("enter you email:")

index = email.index("@")

name = email[:index]

domain = email[index+1::]

print(f"you name is {name} and your domain is {domain}")