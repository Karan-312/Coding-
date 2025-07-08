
# fruits =     ["apple" , "orange" , "banana" , "cononut"]
# vegetables = ["celery" , "carrots" , "potatoes"]
# chocolates = ["dairy milk" , "milkybar" , "kitkat"]

# groceries = [fruits,vegetables,chocolates]

# print(groceries[0][0])

# another way 

# groceries = [["apple" , "orange" , "banana" , "cononut"],
#              ["celery" , "carrots" , "potatoes"],
#              ["dairy milk" , "milkybar" , "kitkat"]]

# for collection in groceries :
#     for food in collection :
#         print(food,end=" ")
#     print()

# 2D keypad

num_pad = ((1,2,3),
           (4,5,6),
           (7,8,9),
           ("*",0,"#"))

for row in num_pad :
    for element in row :
        print(element , end= " ")
    print()