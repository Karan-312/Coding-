#list comprehension

# doubles = []

# for x in range(0,11):
#     doubles.append(2*x)
    
# print(doubles)

# doubles = [x*2 for x in range(0,11)]

# print(doubles)

numbers = [1,-2,3,-4,5,-6]

positive_nums = [num for num in numbers if num >=0]

print(positive_nums)