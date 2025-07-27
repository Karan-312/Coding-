# import sys
# from PyQt5.QtWidgets import QMainWindow , QApplication , QLabel , QPushButton
# from PyQt5.QtGui import QIcon
# from PyQt5.QtCore import Qt

# class Window_enable(QMainWindow):
#     def __init__(self):
#         super().__init__()
#         self.setWindowTitle("this is karan's app")
#         self.setGeometry(650,200,600,600)
#         self.setWindowIcon(QIcon("C:\\Users\\rudra\\Desktop\\coding\\chatgpt(c++)\\Screenshot 2025-07-25 181246.png"))
#         self.iniUI()
#         self.new_button()
        

#     # def keyPressEvent(self,event):
#     #     if event.key() == Qt.Key_Escape:
#     #        self.close()

#     def iniUI(self): # upper button
#        self.button = QPushButton("click me " , self)
#        self.button.setGeometry(200,190,200,200)
#        self.button.setStyleSheet("font-size : 30px;")
#        self.button.clicked.connect(self.click)

#     def new_button(self): # lower button 
#         self.new_button = QPushButton("press_here",self)
#         self.new_button.setGeometry(260,387,100,100)
#         self.new_button.setStyleSheet("font-size : 15px;"
#                                        "color: green;" )
#         self.new_button.clicked.connect(self.click_new_button)

#     def click(self):
#         print("button clicked")
#         self.button.setText("Clicked")
#         # self.button.setDisabled(True)


#     def click_new_button(self):
#         print("new button clicked")
#         self.new_button.setText("new")


# if __name__ == "__main__":
#     app = QApplication(sys.argv)
#     window = Window_enable()
#     window.show()
#     sys.exit(app.exec_())
