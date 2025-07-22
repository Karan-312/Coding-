# static method = a method that belong to a class rather than any object from that class (instance)
#                 usually used for general utility functions

# instance methods = best for operations on instances of the class 
# static methods = best for utility functions that do not need access to class data

class Employee:

    def __init__(self,name,position):
        self.name = name
        self.position = position

    def get_info(self):
        return f"{self.name} =  {self.position}"  

    @staticmethod
    def is_valid_position(position):
        valid_positions = ["manager","chashier","janitor"]
        return position in valid_positions
    

employee1 = Employee("eugene" ,"manager")
employee2 = Employee("karan" ,"chashier")
employee3 = Employee("rocky" ,"janitor")


# print( Employee.is_valid_position("manager") )

print(employee1.get_info())
print(employee2.get_info())
print(employee3.get_info())
