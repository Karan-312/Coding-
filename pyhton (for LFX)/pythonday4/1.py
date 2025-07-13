# FUNCTIONS 

# def happy_birthday (name,age):
#     print(f"happy birsthday to {name} : {age}")
#     print("you are old ")
#     print("happy birthday to you ! ")
#     print()
   
# happy_birthday("Bro","20")

# def add(x,y):
#     z=x+y
#     return z 

# def sub(x,y):
#     z=x-y
#     return z 

# print(sub(1,2))

def create_name(first , last ):
    first = first.capitalize()
    last = last.capitalize()
    
    return first + " " + last 
full_name = create_name("bro","code")

print(full_name)