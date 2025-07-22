# DECORATOR -  a functions that extends the behavior of another function 
# w/o modifying the base function 
# pass the base function as am argument to the decorator 
           
def add_sprinkles(func):
    def wrapper(*args,**kwargs):
        print("you add sprinkles")
        func(*args,**kwargs)
    return wrapper


def add_fudge(fucn):
    def wrapper(*args,**kwargs):
        print("you add fudge")
        fucn(*args,**kwargs)
    return wrapper

@add_sprinkles
@add_fudge
def get_ice_cream(flavor):
    print(f"here is your {flavor} ice-cream 🍧🍧")

get_ice_cream("chocolate")