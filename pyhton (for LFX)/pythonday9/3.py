import sys
from PyQt5.QtWidgets import QApplication, QMainWindow , QLabel
from PyQt5.QtGui import QPixmap

class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("🔥 My Cool First GUI 🔥")
        self.setGeometry(700,300,500,500)
        
        label = QLabel(self)
        label.setGeometry(0,0,250,250)

        pixmap = QPixmap("pythonday9/111.png")
        label.setPixmap(pixmap)

        # label.setScaledContents(True)

        label.setGeometry((self.width() - label.width()) // 2 ,
                          (self.height()-label.height()) // 2 ,
                          label.width(),
                          label.height())

def main():
    app = QApplication(sys.argv)
    window = MyWindow()  # ✅ Instantiate your custom window class
    window.show()
    sys.exit(app.exec_())

if __name__ == "__main__":
    main()
