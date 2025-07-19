# object / class 

class car:
    def __init__(self, model , year , color , for_sale):
        self.model = model
        self.year = year 
        self.color = color
        self.for_sale = for_sale

    def drive(self):
        print(f"you drive the car {self.color} {self.model}")

    def stop(self):
        print(f"you stop the car {self.color} {self.model}")

car1 = car("mustang" , "2024" , "blue" , False)
car2 = car("masarati" , "2023" , "blue" , True)

# print(car1.model)
# print(car1.year)
# print(car1.color)
# print(car1.for_sale)
# print(car2.model)
# print(car2.year)
# print(car2.color)
# print(car2.for_sale)
car1.stop()