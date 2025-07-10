#random module 
# import random
# low = 1
# high = 100
# options = ("rock" , "paper" ,"scissors")
# number = random.randint(low,high)
# number = random.random()
# option = random.choice(options)
# print(option)

import random

low = 1 
high = 100
guesses =0 
number = random.randint(low,high)

while True :
      guess = int(input(f"enter a number between {low} - {high} ::"))
      guesses += 1
    
      if guess < number:
           print (f"{guess} is too low ")
      elif guess >number :
           print(f"{guess} is too high ")
      else:
           print(f"{guess} is correct")
           break
      
print(f" this round took you {guesses} guesses")       