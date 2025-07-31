#Setting stylesheets in PyQt5
import sys 
from PyQt5.QtWidgets import QApplication , QMainWindow , QWidget , QHBoxLayout , QPushButton
from PyQt5.QtCore import Qt

# you can add hover effect by simply using havor:) 
class Mainwindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(650,200,600,600)
        self.button1 = QPushButton("#1")
        self.button2 = QPushButton("#2")
        self.button3 = QPushButton("#3")
        self.widgets()

    def widgets(self):
        central_widget = QWidget()
        self.setCentralWidget(central_widget)

        hbox = QHBoxLayout()

        hbox.addWidget(self.button1)
        hbox.addWidget(self.button2)
        hbox.addWidget(self.button3)

        central_widget.setLayout(hbox)

        self.button1.setObjectName("button1")
        self.button2.setObjectName("button2")
        self.button3.setObjectName("button3")

        self.setStyleSheet("""
            QPushButton{
                font-size: 40px;
                font-family: Ariel;
                padding: 15 px 75px;
                margin: 2 px;
                border: 3px solid;
                border-radius: 15px;
            }          
            QPushButton#button1{  
                background-color: #e0e314;
            }  
            QPushButton#button2{
                background-color: #b2c918;
            }
            QPushButton#button3:hover{
                background-color: #a5e314;
            }                
        """)


    def keyPressEvent(self, event):
        if event.key() == Qt.Key_Escape:
            self.close()



if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Mainwindow()
    window.show()
    sys.exit(app.exec_())

