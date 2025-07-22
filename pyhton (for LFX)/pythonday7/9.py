# filter(function,collection) = return all elements that pass a condition

# def is_passing(grade):
#     return grade > 30 

grades = [91,86,49,22,10,0,43]


passing_grades = list(filter(lambda grade : grade > 30 ,grades))

print(passing_grades)