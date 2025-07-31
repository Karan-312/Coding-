
# employees = ["karan" ,"raghav" , "rehan "]

# # txt_data  = " i like pizza !!"


# file_path = "C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\chatgpt(c++)\\output.txt"

# try:
#     with open(file = file_path , mode= "w") as file:
#         # file.write("\n" + txt_data) with mode ="a" it appeneds 
#         # file.write("\n" + txt_data) with mode ="w" it just writes a line one time 
#         for x in employees :
#             file.write(x + "\n")
         
#         print(f"txt file {file_path} was crearted ")
# except FileExistsError:
#     print("THERE IS ALREADY A FILE DUMMY!!")

# import json

# employee = {
#     "name" : "karan",
#     "age" : 30,
#     "job" : "cook"
# }

# file_path = "C:/Users/rudra/OneDrive/Desktop/coding/chatgpt(c++)/testing1.json"

# try:
#     with open(file=file_path , mode= "w") as file:
#         json.dump(employee,file,indent=4)
#         print(f"json file {file_path} was created")
# except FileExistsError:
#     print("there it is already ")

import csv

employee = [["name" ,"age","job"],
            ["karan","40","cook"],
            ["patrick","45","janitor"],
            ["sandy","33","teacher"]]

file_path = "C:/Users/rudra/OneDrive/Desktop/coding/chatgpt(c++)/testing3.csv"

try:
    with open(file=file_path , mode= "w" , newline="") as file:
        writer = csv.writer(file)
        for row in employee:
            writer.writerow(row)
        print(f"csv file {file_path} was created")
except FileExistsError:
    print("there it is already ")