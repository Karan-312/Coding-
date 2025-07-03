#pyhton compound interest calculator 



principal_amount = float(input("enter the principle amount: "))
rate_of_interest = float(input("enter the rate of interest: "))/100
n = float(input("enter the number of times interest is compounded per year: "))
time_in_year = float(input("enter the total amount in terms of year: "))


P = (n*time_in_year)

T = (1+rate_of_interest/n)

part_of_formula = pow(T,P)

final_amount = (principal_amount * part_of_formula)

print(f"you final amount is  : {final_amount} ")