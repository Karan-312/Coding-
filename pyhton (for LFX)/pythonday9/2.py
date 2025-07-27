import sys
from PyQt5.QtWidgets import QApplication, QMainWindow,QLabel
from PyQt5.QtGui import QIcon
from PyQt5.QtGui import QFont
from PyQt5.QtCore import Qt 

class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("🔥 My Cool First GUI 🔥")
        self.setGeometry(700,300,500,500)
        self.setWindowIcon(QIcon("C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\pyhton (for LFX)\\pythonday9\\111.png"))

        label = QLabel("Hello",self)
        label.setFont(QFont("Arial" , 30))
        label.setGeometry(0,0,500,100)
        label.setStyleSheet("color: #060808;"
                            "background-color: #c511cf;"
                            "font-weight: bold;"
                            "font-style: italic;"
                            "text-decoration: underline;")
        # label.setAlignment(Qt.AlignTop) VERTICAL TOP 
        # label.setAlignment(Qt.AlignBottom) VERTICAL BOTTOM
        # label.setAlignment(Qt.AlignVCenter) VERTICLE CENTER

        # label.setAlignment(Qt.AlignRight) HORIZONTAL RIGHT 
        # label.setAlignment(Qt.AlignHCenter) HORIZONTAL CENTER
        # label.setAlignment(Qt.AlignLeft) #HORIZONTAL CENTER

        # label.setAlignment(Qt.AlignHCenter | Qt.AlignBottom)
        label.setAlignment(Qt.AlignCenter)


def main():
    app = QApplication(sys.argv)
    window = MyWindow()  # ✅ Instantiate your custom window class
    window.show()
    sys.exit(app.exec_())

if __name__ == "__main__":
    main()
