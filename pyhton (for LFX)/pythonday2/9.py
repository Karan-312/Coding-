#nested loop

rows  = int(input("enter the number of rows :"))
coloumns  = int(input("enter the number of coloumns  :"))
symbol = input("enter a symbol to use ")

for x in range (rows):
    for y in range(coloumns):
        print(symbol,end="")
    print()
    
    
# for x in range (3):
#     for y in range(1,10):
#         print(y,end="")
#     print()

    