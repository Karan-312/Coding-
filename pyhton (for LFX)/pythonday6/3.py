#INHERITANCE = allows a class to inherit attributes and methods from another class

class Animal:
    def __init__(self,name):
       self.name = name
       self.is_alive=True
    
    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
        print(f"{self.name} id sleeping")

class Dog(Animal):
    def speak(self):
        print("woof!!")

class Cat(Animal):
    pass

class Mouse(Animal):
    pass

dog = Dog("jacky")
cat = Cat("john")
mouse = Mouse("mickey")

# print(dog.name)
# dog.eat()
dog.speak()