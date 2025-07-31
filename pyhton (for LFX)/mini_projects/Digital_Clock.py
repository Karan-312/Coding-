# import sys
# from PyQt5.QtWidgets import (QApplication , QMainWindow , QLabel , QWidget , QVBoxLayout , QHBoxLayout , QGridLayout)
# from PyQt5.QtCore import Qt
# from PyQt5.QtGui import QIcon 


# class Window_display(QMainWindow):
#     def __init__(self):
#         super().__init__()
#         self.setWindowTitle("Digital_Clock")
#         self.setWindowIcon(QIcon("C://Users//rudra//Downloads//5776328.jpg"))
#         self.setGeometry(650,200,500,150)
#         self.set_clock_window()

#     def keyPressEvent(self, event):
#         if event.key() == Qt.Key_Escape:
#             self.close()

#     def set_clock_window(self):
        
#         central_widget = QWidget()
#         self.setCentralWidget(central_widget)


#         label1 = QLabel("1",self)
#         label1.setGeometry(650,200,600,250)
#         label1.setStyleSheet("background-color : black;" \
#                             " color : red; " \
#                             " font-size : 100px;")

#         vbox = QVBoxLayout()
#         vbox.addWidget(label1)
#         central_widget.setLayout(vbox)

# if __name__ == "__main__":
#     app = QApplication(sys.argv)
#     window = Window_display()
#     window.show()
#     sys.exit(app.exec_())


# making a executable time clock which imports the time clock based on local time configs 

import time

user_case_input = 2**32

for x in range(user_case_input) : 
    seconds = x % 60
    minutes = int(x /360)
    hours = int(x/3600)
    timer = (f"{hours:02}:{minutes:02}:{seconds:02}")
    time.sleep(1)
    print(timer)
