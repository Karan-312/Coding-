# *args and **kwargs 


# def add (*nums):
#     total = 0 
#     for x in nums :
#         total += x
#     return total    

# print(add(1,2,3,4,45))

# def display_name(*args):
#     for x in args:
#         print(x,end= " " )
        
        
# display_name("mr" ,"karan","mr","rudrawal")        

# def addres(**kwargs):
#     for x,y in kwargs.items():
#         print(f"{x} : {y}")

# addres(street = "123" ,city = "kota", state = "raj",zip ="1234" )

# def shipping_address(*args, **kwargs):
#     for x in args :
#         print(x,end=" ")
#     print()  
      
#     if "apt" in kwargs:
#         kwargs.popitem()
#         for y,z in kwargs.items():
#             print(f"{y} : {z}")
#     else:
#         print(f"{kwargs.get('state') , kwargs.get('city') ,kwargs.get('zip_code'),kwargs.get('sector'),kwargs.get('home_addres')}")

    
# addres = shipping_address("Mr", "Karan" ,"Rudrawal",
#                           state="rajasthan" ,
#                           city= "kota" , 
#                           zip_code = "324005" ,
#                           sector="A",
#                           apt = "#102",
#                           home_addres = "192")
