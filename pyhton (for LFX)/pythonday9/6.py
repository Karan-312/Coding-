# PyQt5 checkboxes
import sys
from PyQt5.QtWidgets import QApplication , QMainWindow , QCheckBox
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QFontDatabase


class Mainwindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("this is a software")
        self.setGeometry(650,200,600,600)
        self.checkbox = QCheckBox("do you like to eat pizza!!" , self)
        # self.setStyleSheet("color : green")
        self.initUi()
    
    def keyPressEvent(self,event):
        if event.key() == Qt.Key_Escape:
            self.close()
    
    def initUi(self):
        self.checkbox.setGeometry(0,0,500,100)
        self.checkbox.setStyleSheet("font-size : 30px;"
                                    "font-style : Italic;"
                                    "color : #97db0d;"
                                    "font-family : Baskerville;")
        self.checkbox.setChecked(False)
        self.checkbox.stateChanged.connect(self.checkbox_content)

    def checkbox_content(self,state):
        # print(state)
       if state == Qt.Checked:
           print("you liked this food")
       else:
           print("you do not like this food")
           
if __name__ == "__main__":
    app = QApplication(sys.argv)
    window1 = Mainwindow()
    window1.show()
    sys.exit(app.exec_())