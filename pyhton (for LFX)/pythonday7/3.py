#class methods :- allow opearations related to the class itself
# take(cls) as the first parameter , which represent the class itself

class Students:
    
    count = 0 
    total_gpa = 0

    def __init__(self,name,gpa):
        self.name = name
        self.gpa = gpa
        Students.count += 1
        Students.total_gpa += gpa

    #instance method
    def get_info(self):
        return f"{self.name} {self.gpa}"
    
    @classmethod
    def get_count(cls):
        return f"total number of students : {cls.count}"
    
    @classmethod
    def get_average(cls):
        if cls.count == 0 :
            return 0 
        else:
            return f"{cls.total_gpa / cls.count}"
    

student1 = Students("karan",3.2)
student2 = Students("raghav", 5.6)

print(Students.get_count())
print(Students.get_average())
