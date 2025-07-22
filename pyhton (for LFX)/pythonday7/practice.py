# nested classes 

class School:
  class Student:
    def __init__(self,student_name , student_id , student_section):
       self.student_name = student_name
       self.student_id = student_id
       self.student_section = student_section
    def get_stu_details(self):
       return f"{self.student_name} {self.student_id} {self.student_section}"
  
  def __init__(self,scholl_name):
      self.school_name = scholl_name
      self.student_display = []
  def add_students(self,student_name,student_id,student_section):
     new_student = self.Student(student_name,student_id,student_section)
     self.student_display.append(new_student)

  def display_students(self):
     return[x.get_stu_details() for x in self.student_display]
  
school_name = School("DAV public school")

school_name.add_students( 123 , "123" , "A")
school_name.add_students("ketan" , "12" , "F")
school_name.add_students("kar" , "13" , "K")

for y in school_name.display_students():
   print(y)