import sys
from PyQt5.QtWidgets import QApplication , QMainWindow , QLineEdit , QPushButton
from PyQt5.QtCore import Qt



class Mainwindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(650,200,600,600)
        self.line_edit = QLineEdit(self)
        self.button = QPushButton("submit",self)
        self.initUI()
    


    def keyPressEvent(self, event):
          if event.key() == Qt.Key_Escape:
               self.close()

    def initUI(self):
        self.button.setGeometry(310,10,300,40)
        self.line_edit.setGeometry(10,10,300,40)
        self.line_edit.setStyleSheet("font-size : 25px;"
                                    " font-family : Arial;")
        self.button.setStyleSheet("font-size : 25px;"
                                " font-family : Arial;")
        self.line_edit.setPlaceholderText("Enter your Name")
        
        self.button.clicked.connect(self.submit)

    def submit(self):
         text  = self.line_edit.text()
         print(f"hello{text}")
    

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Mainwindow()
    window.show()
    sys.exit(app.exec_())