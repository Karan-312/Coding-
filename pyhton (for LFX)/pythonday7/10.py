#reduce (fucntion , collection) = reduces elemnsts in a collection to a single value 
# for loop is better in most cases 
# reduce is better for a fucntional approach + readiblity 

from functools import reduce

# def adding(x,y):
#     return x+y

prices = [19.32,128.43,4398.34,23.4]

total = reduce (lambda x,y :x +y,prices)

print(f"{total} $")