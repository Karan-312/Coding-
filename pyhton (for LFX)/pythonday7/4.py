# magic methods -  dunder methods (double underscore) __init__ , __str__,__eq__
# they are automatically called by many of python's built-in operations
# they allow deves to define or evaluate or coustamize the behavior of objects

class Books:

    def __init__(self,title,author,num_pages):
        self.title = title
        self.author = author
        self.num_pages = num_pages

    def __str__(self):
        return f"{self.title} by {self.author}"
    
    def __eq__(self, other):
        return self.title == other.title and self.author == other.author
    
    def __gt__(self,other):
        return self.num_pages > other.num_pages
    
    def __add__(self,other):
        return  self.num_pages +  other.num_pages
    
    def __contains__(self,keyword):
        return keyword in self.title or keyword in self.author
    
    def __getitem__ (self,key):
        if key == "title":
            return self.title
        if key == "auth":
            return self.author

book1 = Books("lulla lulla" , "karan" , 213)
book2 = Books("lulla lulla", "karan" , 2136)
book3 = Books("pulla pulla" , "pulli" , 902)

# print(book1)
# print(book1==book2)
# print( book2 + book3) 

print(book2["auth"])