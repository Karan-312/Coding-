amount = 0 
def deposit ():
    amount = 0 
    user_deposit = float(input ("enter the amount you want to deposit : "))
    amount = amount + user_deposit
    return amount

def withdrawl():
    
    user_withrawl = float(input ("enter the amount you want to withdraw from your account : "))
    amount = amount - user_withrawl
    return amount

def net_balance():

    user_balance= deposit() + withdrawl()
    print(f"the total amount in your bank balance is : {user_balance}")



while True :

    print("-----BANKING PROGRAM-----")
    display = {"TOTAL BALANCE" : 1,
               "DEPOSIT" :2,
               "WITHDRAWL" :3,
               "EXIT":4}
    for x,y in display.items():
        print(f"{x}:{y}")
