
length = float(input("enter the length of the rectangle in cm  "))
breadth = float (input("enter the breadth  of the rectangle in cm "))
area = int((length*breadth))

print("---------------------------------------------------------------")

if (length > 0 and breadth > 0 ) :
    
    print(f"the given length of rectangle is  : {length} cm ")
    print(f"the given breadth of rectangle is  : {breadth} cm ")
    
elif(length < 0 or breadth <0):
    
    if(length < 0):
        print("the measurement you entered for length is not logically accepeted ")
    else:
        print("the measurement you entered for breadth in not logically accepted ")
    
    
print("---------------------------------------------------------------")

if(length < 0 or breadth <0 ):
    print("the area cannot be displayed becasue of invalid inputs of measurements")
else:
    print(f"the value of area according to your given measuremnets are : {area} cm^2")
    