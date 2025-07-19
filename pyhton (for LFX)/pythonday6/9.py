# @aggeration = represent a relantionship where one object (the whole)
# containd referneces to one or more independent obejects(the parts)

class Library:
    def __init__(self,name):
        self.name = name
        self.books = []

    def add_book(self,book):
        self.books.append(book)

    def list_books(self):
        return[f"{book.title} by {book.author}"for book in self.books]

class Book:
    def __init__(self,title,author):
        self.title = title
        self.author = author

library = Library("new york public lib.")

book1 = Book("harry porter ... ," , "J.K rowling")

book2 = Book("the hobbit" ,"J . R . R Tlokein")

book3 = Book("the color of magic " , "terry pratchest")

library.add_book(book1)
library.add_book(book2)
library.add_book(book3)


print(library.name)
for x in library.list_books():
    print(x)

