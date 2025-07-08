questions =  ((" what is the biggest planet in the solar system ? "),
              (" what is the name of the person who discovered gravity "),
              (" how much gap is between a leap year ? "),
              (" what is the numbers of bones in a human body? "))


options   =   (( "A. Juptier" , "B. Saturn" , "C. Mars" ,"D. Earth" ),
              ( "A. Newton" , "B. Ienstien" , "C. Nikola tesla" ,"D. Mary cury" ),
              ( "A. 3-Years" , "B. 4-years" , "C. 10-Years", "D. 16-Years" ),
              ( "A. 116" , "B. 118" , "C. 117" ,"D. 120" ))
              
question_number = 0 

answers = (("A"),("B"),("C"),("D"))

score = 0 

guesses = []

for x in questions :
    print("---------------------------------------------------------")
    print(x)
    for y in options[question_number] :
       print(y)
    
    while True :
        guess = input(" what is the option you want to select A.,B.,C.,D. -> ").upper()
        if guess in ["A","B","C","D"] :
            break
        else:
            print(f"input your choice again , your current option was invalid :{guess}")

    guesses.append(guess)   
    if guess == answers[question_number] :
        score = score +1
        print("your answer is correct")        
    else:
        print("you answer is incoorect")
           
    question_number = question_number + 1  
       

print("----------------------------------------")

for a in answers :
    print(a , end= " ")
    
print()
    
for g in guesses :
    print(g , end=" ")       

final_score = ((score/4)*100)
print(f"you final score percentage of the quiz is {final_score} " )