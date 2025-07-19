#ABSTRACT CLASS : a class that cant be instantiated on its own , meant to be subclassed 
                #   they can contain abstact methods , which are decalred but have to implementation
                #    abstract classes benefits:
                #   1.prevents instantiation of the class itself
                #   2.requires childern to use inherited abstract methods 

from abc import ABC,abstractmethod

class Vehicle(ABC):
    
    @abstractmethod
    def go():
        pass
    
    @abstractmethod
    def stop():
        pass

class Car(Vehicle):
    
    def go(self):
        print("you drive the car")

    def stop(self):
        print("stop the damn car ")

# car = Car()

# car.go()
# car.stop()
class Motorcycle(Vehicle):
    def go(self):
        print("you drive the mothecycle")

    def stop(self):
        print("stop the damn mothercycle ")

# motercycle = Motorcycle()
# motercycle.stop()
class Boat(Vehicle):

    def go(self):
        print("you drive this boat")
    def stop(self):
        print("stop the damn boat ")

boat = Boat()

boat.stop()