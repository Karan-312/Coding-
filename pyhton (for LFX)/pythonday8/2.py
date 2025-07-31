#recursion  = a fucntion that calls itself

#iterative

# def walk(steps):
#     for x in range(1,steps+1):
#         print(x)

#recursive

# def walk(steps):
#     if steps == 0 :
#         return
#     walk(steps-1)
#     print(f"you take step #{steps}")

# walk(1000)

# def fact(x):
#     result = 1 
#     if x > 0 :
#         for y in range (1,x+1):
#             result = result * y 
#         return result
    

def fact(x):
    if x ==  1 :
        return 1 
    else:
        return x * fact(x-1)
    
print(fact(10))