import random

def payout(balance,bet):
    
    pass
    
def row_build():
    slot_shuffle =["🐛","🍒","🥭","🍏","🍑"]
    slot_filling =[]
    for x in range(3):
        slot_filling.append(random.choice(slot_shuffle)) 
    return slot_filling
    
def print_row(row):
    print(" | ".join(row))

def main ():
    balance = 100
    
    print("********************************")
    print("welcome to python slot game !!!")
    print("********************************")
    print("SYMBOLS : 🐛 | 🍒 | 🥭 | 🍏 | 🍑")
    print("********************************")
    
    while balance > 0 :
        print(f"current balance is : {balance}")
        bet = input ("enter the amount you want to bet : ")
        print("********************************")
        bet = int(bet)

        if bet > balance:
            print("insufficient funds")
            continue

        if bet <= 0 :
            print("aint to way bro you are this gone 💀")
            continue
    
        balance = balance-bet
        
        row = row_build()
        print_row(row)

if __name__ == "__main__":
    main()