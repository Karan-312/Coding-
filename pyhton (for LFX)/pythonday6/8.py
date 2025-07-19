#Duck Typing = another way to achieve polymorphism without inheritance
            #    object must have the minimum necessary attribute/methods

class Animal:
    alive = True

class Dog(Animal):
    def speak(self):
        print("woof!!")

class Cat(Animal):
    def speak(self):
        print("meow!!")

class Car:

    alive = True

    def speak(self):
        print("honk!!")

animals =[Dog(),Cat(),Car()]

for x in animals:
    x.speak()
    print(x.alive)