#pyqt5 push buttons 

import sys 
from PyQt5.QtWidgets import QMainWindow , QApplication , QPushButton , QLabel
from PyQt5.QtGui import QIcon
from PyQt5.QtCore import Qt

class Mainwindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("this is karan's app")
        self.setGeometry(650,200,600,600)
        self.setWindowIcon(QIcon("C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\chatgpt(c++)\\Screenshot 2025-07-24 120437.png"))
        self.initUI()
        self.new_button()

    def keyPressEvent(self,event):
         if event.key() == Qt.Key_Escape:
             self.close()

    def initUI(self):
        self.button = QPushButton("click me " ,self)
        self.button.setGeometry(200,190,200,200)
        self.button.setStyleSheet("font-size : 30px;")
        self.button.clicked.connect(self.click)

    def new_button(self):
        self.new_button = QPushButton("hello" ,self) 
        self.new_button.setGeometry(260,387,100,100)
        self.new_button.setStyleSheet("font-size : 30px;"
                                "color : pink;")
        self.new_button.clicked.connect(self.click_new_button)
        # self.label = QLabel("hello",self)
        # self.label.setGeometry(290,300,200,200)
        
    def click(self):
        print("button clicked")
        self.button.setText("Clicked")
        # self.button.setDisabled(True)

    def click_new_button(self):
        print("new button clicked")
        self.new_button.setText("new")
        

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Mainwindow()
    window.show()
    sys.exit(app.exec_())

