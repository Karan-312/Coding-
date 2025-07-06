#pyhton compound interest calculator 


principal_amount = float(input("enter the principle amount: "))

while principal_amount < 0 :
    print(f" the amount you entered is not valid ")
    principal_amount = float(input("enter the principle amount: "))
    
    
rate_of_interest = float(input("enter the rate of interest: "))/100

while rate_of_interest < 0 :
    print(f"the rate of interest you have enterend is invalid")
    rate_of_interest = float(input("enter the rate of interest: "))/100
    
    
n = int(input("enter the number of times interest is compounded per year: "))

while n <= 0 :
    print(f"the value you enterend is invalid ")
    n = int(input("enter the number of times interest is compounded per year: "))
    
time_in_year = int(input("enter the total amount in terms of year: "))

while time_in_year <= 0  :
    print(f" the value of year must be atleast 1 ")
    time_in_year = int(input("enter the total amount in terms of year: "))



P = (n*time_in_year)

T = (1+rate_of_interest/n)

part_of_formula = pow(T,P)

final_amount = (principal_amount * part_of_formula)

print(f"you final amount is  : {final_amount:.2f} ")