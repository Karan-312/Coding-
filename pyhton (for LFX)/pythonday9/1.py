import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5.QtGui import QIcon

class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("🔥 My Cool First GUI 🔥")
        self.setGeometry(700,300,500,500)
        self.setWindowIcon(QIcon("C:\\Users\\rudra\\OneDrive\\Desktop\\coding\\pyhton (for LFX)\\pythonday9\\111.png"))


def main():
    app = QApplication(sys.argv)
    window = MyWindow()  # ✅ Instantiate your custom window class
    window.show()
    sys.exit(app.exec_())

if __name__ == "__main__":
    main()

