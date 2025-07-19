
class Shoping_mall:
    def __init__(self,name,address):
        self.name = name 
        self.address = address
        self.veg_ref =[]

    def add_veges(self,veges):
        self.veg_ref.append(veges)

    def name_veges(self):
        return [f"{veges.veg_name} are in the {veges.shelf_number} shelf "for veges in self.veg_ref]

class Vegetables:
    def __init__(self,veg_name,quantity,price,shelf_number):
        self.veg_name = veg_name
        self.quantity= quantity
        self.price= price
        self.shelf_number= shelf_number

vegetable1 = Vegetables("brocolli", "1kg" , "3.5$" , "3") 
vegetable2 = Vegetables("spinach" , "1.5kg" , "1.99$" , "4") 
vegetable3 = Vegetables("potato", "3kg" , "0.56$" , "5") 

shopping_mall = Shoping_mall("new delhi shopping mall","156 street , sector A")

shopping_mall.add_veges(vegetable1)
shopping_mall.add_veges(vegetable2)
shopping_mall.add_veges(vegetable3)

for x in shopping_mall.name_veges():
    print(x)