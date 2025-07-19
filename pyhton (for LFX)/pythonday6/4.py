class Animal:
    def __init__(self,name):
        self.name = name

    def eat(self):
        print(f" {self.name} is eating")
    def sleep(self):
        print(f" {self.name} is sleeping")

class Prey(Animal):
    def flee(self):
        print(f" {self.name} is fleeing")

class Predator(Animal):
    def hunt(self):
        print(f" {self.name} is the hunter")

class Rabbit(Prey):
    pass
class Hawk(Predator):
    pass
class Fish(Prey,Predator):
    pass

rabbit = Rabbit("bungs")
hawk = Hawk("tony")
fish = Fish("nemo")
#testing
hawk.hunt()