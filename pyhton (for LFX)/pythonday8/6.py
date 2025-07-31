

# file_path = "C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\chatgpt(c++)\\output.txt"
# try:
#     with open(file_path , "r") as file:
#         content = file.read()
#         print(content) 
# except FileNotFoundError:
#         print("that file was not found !!")     

# import json 

# file_path= "C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\chatgpt(c++)\\testing1.json"

# try:
#     with open(file_path , mode= "r" ) as file:
#         content = json.load(file)
#         print(content)
# except FileNotFoundError:
#         print("file is not present ")

import csv 

file_path= "C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\chatgpt(c++)\\testing3.csv"

try:
    with open(file_path , mode= "r" ) as file:
        content = csv.reader(file)
        for x in content:
             print(x[2])
        print(content)
except FileNotFoundError:
        print("file is not present ")