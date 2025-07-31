#SORTING IN PYTHON .sort() or sorted ()
# lits[] , tuples() ,dict{"":""},objects

# fruits = ["banana","orange","apple","coconut"]

# fruits.sort(reverse=True)

# print(fruits)

# fruits = ("banana","orange","apple","coconut")

# # fruits = tuple(sorted(fruits))
# fruits = tuple(sorted(fruits,reverse=True))

# print(fruits)

# fruits = {"banana":"1",
#           "orange":"2",
#           "apple":"3",
#           "coconut":"4"}

# # fruits = dict(sorted(fruits.items()))
# # fruits = dict(sorted(fruits.items(),key = lambda item : item[0] , reverse=True))
# fruits = dict(sorted(fruits.items(),key = lambda item : item[1] , reverse=True))

# print(fruits)

#_------------------------------------------------------------------------------------------------------------------
#_------------------------------------------------------------------------------------------------------------------
#_------------------------------------------------------------------------------------------------------------------
#_------------------------------------------------------------------------------------------------------------------

class Fruit:
    def __init__(self,name,calories):
        self.name = name
        self.calories = calories

    def __repr__(self):
        return f"{self.name} : {self.calories}"
    
Fruits = [Fruit("banana",105) ,Fruit("apple" ,72) , Fruit("orange",73)]

Fruits = sorted(Fruits , key=lambda x : x.calories , reverse= True)


print(Fruits)