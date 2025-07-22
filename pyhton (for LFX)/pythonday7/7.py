#LAMDA fucntions  = = A small anonymous function for a one time use, (throw away function)
# They take any number of arguments, but have only 1 expression
# Helps keep the namespace clean and is useful with higher order functions
# 'sort()', 'map()', 'filter()', 'reduce()'
# lambda parameters: expression

double = lambda x : x * 2 
add =  lambda x,y: x+ y 
max_value = lambda x,y :x if x > y else y 
min_value = lambda x,y :x if x < y else y 
full_name = lambda first,last : first + last 
is_even = lambda x : x % 2 == 0 
age_verify = lambda age : True if age>=18 else False

print(double(6))
print(add(6,3))
print(max_value(1,3))
print(min_value(1,3))
print(full_name( "karan","rudrawal"))
print(is_even(5))
print(age_verify(22))