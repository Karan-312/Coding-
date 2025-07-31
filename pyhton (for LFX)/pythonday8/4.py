import os

file_path = "C:\\Users\\rudra\\OneDrive\\Desktop\\backup folders"

if os.path.exists(file_path):
    print("the location is found")

    if os.path.isfile(file_path):
        print("that is a file")

    if os.path.isdir(file_path):
        print(" this is a directory ")
else:
    print("location not found")
