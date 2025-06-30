temp = input(" in which unit you want you temp to be in ? (f/c) -- > ")

print("------------------------------------------------------------------------")
print("------------------------------------------------------------------------")

if temp == "c":
    
    temp_given_in_ferhenite = float(input(f" what is the temp in ferhenite you want to convert in celcius :  "))
    print("------------------------------------------------------------------------")
    temp_in_calcius = ((temp_given_in_ferhenite-32)*0.55)
    print(f"the temp in celcius is  --> {round(temp_in_calcius,2)}")
else:
    
    temp_given_in_celcius = float(input(f" what is the temp in celcius  you want to convert in farenhite :  "))
    print("------------------------------------------------------------------------")
    temp_in_farenhite = ((temp_given_in_celcius/0.55)+32)
    print(f"the temp in celcius is  --> {round(temp_in_farenhite,2)}")