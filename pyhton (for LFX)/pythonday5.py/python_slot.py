import random

def print_row(row):
    print(" | ".join(row))
def payout(balance,bet):
    
    pass
    
def row_build():
    slot_shuffle =["🐛","🍒","🥭","🍏","🍑"]
    slot_filling =[]
    for x in range(3):
        slot_filling.append(random.choice(slot_shuffle)) 
    return slot_filling
    
def main ():
    balance = 100
    
    print("********************************")
    print("welcome to python slot game !!!")
    print("********************************")
    print("SYMBOLS : 🐛 | 🍒 | 🥭 | 🍏 | 🍑")
    print("********************************")
    bet = input ("enter the amount you want to bet : ")
    print("********************************")
    bet = int(bet)
    while balance > 0 :
        if bet > balance : 
            print("insuffiecent balance")
            print("********************************")
            break
        elif balance > bet and bet > 0 :
            print(f"your remaing balance is {balance-bet}")
            print("********************************")
            break
        elif bet < 0 :
            print("even i do not know what happened here , there are two cases buddy either you add DOOMED or i am 🫠 ")
            print("********************************")
            break

    row = row_build
    print_row(row)

if __name__ == "__main__":
    main()