# Radio buttons 

import sys
from PyQt5.QtWidgets import QApplication , QMainWindow , QRadioButton , QButtonGroup
from PyQt5.QtCore import Qt


class Mainwindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(650,200,600,600)
        self.radio1 = QRadioButton("Visa",self)
        self.radio2 = QRadioButton("Master_card",self)
        self.radio3 = QRadioButton("Gift_card",self)
        self.radio4 = QRadioButton("In-Store",self)
        self.radio5 = QRadioButton("Online",self)
        self.button_group1 = QButtonGroup(self)
        self.button_group2 = QButtonGroup(self)
        self.first_button()

    def first_button(self):
        self.radio1.setGeometry(0,0,300,50)
        self.radio2.setGeometry(0,50,300,50)
        self.radio3.setGeometry(0,100,300,50)
        self.radio4.setGeometry(0,150,300,50)
        self.radio5.setGeometry(0,200,300,50)

        self.setStyleSheet("QRadioButton{"
                           "font-size:20px;"
                           "font-family : Arial;"
                           "padding: 50px;"
                           "}")
        
        self.button_group1.addButton(self.radio1)
        self.button_group1.addButton(self.radio2)
        self.button_group1.addButton(self.radio3)
        self.button_group2.addButton(self.radio4)
        self.button_group2.addButton(self.radio5)

        self.radio1.toggled.connect(self.radio_button_changed)
        self.radio2.toggled.connect(self.radio_button_changed)
        self.radio3.toggled.connect(self.radio_button_changed)
        self.radio4.toggled.connect(self.radio_button_changed)
        self.radio5.toggled.connect(self.radio_button_changed)

    def radio_button_changed(self):
            radio_button = self.sender()
            if radio_button.isChecked():
                 print(f"{radio_button.text()} is selected")
  
    def keyPressEvent(self,event):
        if event.key() == Qt.Key_Escape:
            self.close()



if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Mainwindow()
    window.show()
    sys.exit(app.exec_())


