weight = input( " in which unit you want to display your weight ? (Kg/lbs) ")
if weight == "Kg":
   weigth_in_pounds_by_user = float(input("enter your weigth in pounds  -->"))
   weigth_in_kilos = (weigth_in_pounds_by_user/2.2)
   print(f"weight in Kg's is {weigth_in_kilos}")
elif weight == "lbs":
    weight_in_kilos_by_user = float(input("enter your weigth in kilos -- >"))
    weight_in_pounds = weight_in_kilos_by_user*2.2
    print(f"weight in pounds is {weight_in_pounds}")
else:
    print(f"the {weight} is an incorrect unit to meaure the weight ")
    

    
    
