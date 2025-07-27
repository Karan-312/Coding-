import sys 
from PyQt5.QtWidgets import QApplication , QMainWindow , QWidget , QHBoxLayout , QPushButton
from PyQt5.QtCore import Qt


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

        self.setStyleSheet("""
            QPushButton{
                font-size: 40px;
                font-family: Ariel;
                padding: 15 px 75px;
                margin: 2 px;
                border: 3px solid;
                border-radius: 15px;
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

