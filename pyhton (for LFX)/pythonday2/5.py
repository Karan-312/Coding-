#format specifiers

#.(number)f round to that many decimal places (fixed point)
#: (number) = allocate that many spaces
#:03 allocate and zero pad that many spaces
#:<= left justify
#:> = right justify
#:^ center align
#+ = use a plus sign to indicate positive value
#:= = place sign to leftmost position
#: = insert a space before positive numbers

price1= 3.3243
price2= -2.3243
price3= 45.324

print(f"price 1 is {price1:<10}")
print(f"price 1 is {price2:^10}")
print(f"price 1 is {price3:>10}")

