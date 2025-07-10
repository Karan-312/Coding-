import random

options = ("rock" , "paper" , "scissors") 
running = True

while running :

    player = None
    computer  = random.choice(options)
    
    
    while player not in options:
        player = input("what is your choice from rock , paper or sciscors ? ")
        
    print(f"computer choice is  :{computer}")
    print(f"user choice is      :{player}")


    if player == computer:
        print (" it is a tie ")
        
    elif player  == "rock" and computer == "scissors":
        print("you win!")
    elif player == "paper" and computer == "rock":
        print("you win!")
    elif player == "scissors" and computer == "paper":
        print("you win!")
    else:
        print("you lose !!")
        
    # play_again = input("play again ? (y/n) :").lower()
    # if not  play_again == "y":    
    #     running = False
    if not input("play again ? (y/n) :").lower() == "y":
        running = False
     
  
print(" thanks for playing ")        