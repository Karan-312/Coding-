# import sys
# import time 
# from PyQt5.QtWidgets import (QApplication , QMainWindow , QLabel , QWidget , QVBoxLayout , QHBoxLayout , QGridLayout)
# from PyQt5.QtCore import Qt
# from PyQt5.QtGui import QIcon 

# class Window_display(QMainWindow):
#     def __init__(self):
#         super().__init__()
#         self.setWindowTitle("Digital_Clock")
#         self.setWindowIcon(QIcon("C://Users//rudra//Downloads//5776328.jpg"))
#         self.setGeometry(650,200,400,100)
#         self.set_clock_window()

#     def keyPressEvent(self, event):
#         if event.key() == Qt.Key_Escape:
#             self.close()

#     def set_clock_window(self):
        
#         central_widget = QWidget()
#         self.setCentralWidget(central_widget)


#         label1 = QLabel("12:00:00",self)
#         label1.setGeometry(650,200,400,100)
#         label1.setStyleSheet("background-color : black;" 
#                             " color : green; " 
#                             " font-size : 100px;")

#         vbox = QVBoxLayout()
#         vbox.addWidget(label1)
#         central_widget.setLayout(vbox)

# if __name__ == "__main__":
#     app = QApplication(sys.argv)
#     window = Window_display()
#     window.show()
#     sys.exit(app.exec_())


# from PyQt5.QtWidgets import 

# class time_display():
#     user_case_input = 2**32

#     for x in range(user_case_input) : 
#         seconds = x % 60
#         minutes = int(x/360)
#         hours = int(x/3600)
#         timer = (f"{hours:02}:{minutes:02}:{seconds:02}")
#         time.sleep(1)
#         print(timer)

import sys
from PyQt5.QtWidgets import QApplication , QMainWindow , QLabel , QWidget , QVBoxLayout
from PyQt5.QtCore import QTimer , QTime , Qt
from PyQt5.QtGui import QFont , QFontDatabase

class DigitClock(QWidget):
    def __init__(self):
        super().__init__()
        self.time_label = QLabel(  self)
        self.timer = QTimer(self)
        self.initUI()

    def initUI(self):
        self.setWindowTitle("Digital Clock")
        self.setGeometry(650,200,400,100)

        vbox = QVBoxLayout()
        vbox.addWidget(self.time_label)
        self.setLayout(vbox)
        
        self.time_label.setAlignment(Qt.AlignCenter)

        self.time_label.setStyleSheet("font-size: 150px;"
                                    #    "font - family:Ariel;"
                                       
                                       "color : hsl(44, 98%, 50%);")
        self.setStyleSheet("background-color : black")
        
        font_id = QFontDatabase.addApplicationFont("C:\\Users\\Asus\\Downloads\\ds_digital\\DS-DIGIT.TTF")
        font_family = QFontDatabase.applicationFontFamilies(font_id)[0]
        my_font = QFont(font_family , 150)
        self.time_label.setFont(my_font)
        self.timer.timeout.connect(self.update_time)
        self.timer.start(1000)
        
        self.update_time()

    def update_time(self):
        current_time = QTime.currentTime().toString("hh:mm:ss AP")
        self.time_label.setText(current_time)

    def keyPressEvent(self, event):
        if event.key == Qt.Key_Escape : 
            event.close()


if __name__ == "__main__" :
    app = QApplication(sys.argv)
    clock  = DigitClock()
    clock.show()
    sys.exit(app.exec_())