#class variables = shared among all instances in the class 


class Student:

    class_year = 2024
    number_students = 0

    def __init__(self,name,age):
        self.name = name
        self.age = age
        Student.number_students +=1

Student1 = Student("alice",30)
Student2 = Student("adam",3)
Student3 = Student("aam",5)
Student4 = Student("am",50)

# print(Student1.name)
# print(Student1.age)
# print(Student.class_year)
print(Student.number_students)