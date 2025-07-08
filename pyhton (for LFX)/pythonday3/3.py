#dictionary = a collection of {key:value} pairs 
            #   odered and changeable, no duplicates
            
            
capitals = {"USA" : "wahington dc ",
            "india" : "new delhi ",
            "china" : "beijing"}

# print(dir(capitals))
# print(help(capitals))

# print(capitals.get("india"))

# if capitals.get("Japan"):
#     print(" that capital exists ")
# else:
#     print(" that capital doesnt exist ")

# capitals.update({"Germany" :"Berlin"})
# capitals.update({"USA" :"Detroit"})

# capitals.pop("china")

# capitals.popitem()

# capitals.clear()

# keys = capitals.keys()

# for key in capitals.keys():
#     print(key)

# values = capitals.values()
# for value in capitals.values():
#     print(value)


# items = capitals.items()

# print(items)


for key,value in capitals.items():
    print(f"{key}:{value}")

