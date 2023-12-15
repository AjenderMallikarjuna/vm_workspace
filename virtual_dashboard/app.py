
import sys
import io
import folium # pip install folium
from PyQt5.QtWidgets import QApplication, QWidget, QHBoxLayout, QVBoxLayout
from PyQt5.QtWebEngineWidgets import QWebEngineView # pip install PyQtWebEngine
from PyQt5 import QtCore, QtGui, QtWidgets
from gauge import AnalogGaugeWidget
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from qtwidgets import AnimatedToggle
from PyQt5.QtGui import QImage
from PyQt5.QtGui import QPixmap
from PyQt5.QtCore import QTimer
import random
from datetime import datetime
import subprocess
import queue
import threading 
import time


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.setFixedSize(1117, 636)
        MainWindow.setStyleSheet("background-color: rgb(30, 31, 40);")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(0, 0, 1111, 651))
        self.label.setText("")
        self.label.setPixmap(QtGui.QPixmap(":/bg/Untitled (1).png"))
        self.label.setScaledContents(True)
        self.label.setObjectName("label")
        self.frame = QtWidgets.QFrame(self.centralwidget)
        self.frame.setGeometry(QtCore.QRect(306, 60, 521, 61))
        self.frame.setStyleSheet("QFrame{\n"
"background:None;\n"
"}\n"
"\n"
"QPushButton{\n"
"    \n"
"    background-color: rgb(43,87,151,70);\n"
"    border:None;\n"
"    color:#fff;\n"
"    font: 10pt;\n"
"\n"
"}\n"
"QPushButton:Hover{\n"
"\n"
"    \n"
"    background-color: rgba(43,87,151,120);\n"
"\n"
"\n"
"}\n"
"\n"
"QPushButton:Pressed{\n"
"    \n"
"    \n"
"background-color: rgba(43,87,120,100);\n"
"\n"
"}")
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.frame)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.btn_dash = QtWidgets.QPushButton(self.frame)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.btn_dash.sizePolicy().hasHeightForWidth())
        self.btn_dash.setSizePolicy(sizePolicy)
        self.btn_dash.setObjectName("btn_dash")
        self.horizontalLayout.addWidget(self.btn_dash)
        self.btn_ac = QtWidgets.QPushButton(self.frame)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.btn_ac.sizePolicy().hasHeightForWidth())
        self.btn_ac.setSizePolicy(sizePolicy)
        self.btn_ac.setObjectName("btn_ac")
        self.horizontalLayout.addWidget(self.btn_ac)
        self.frame_dashboard = QtWidgets.QFrame(self.centralwidget)
        self.frame_dashboard.setEnabled(True)
        self.frame_dashboard.setGeometry(QtCore.QRect(70, 120, 971, 411))
        self.frame_dashboard.setStyleSheet("QFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(34, 46, 61), stop:1 rgba(34, 34, 47));\n"
"\n"
"border-radius:200px;\n"
"\n"
"}")
        self.frame_dashboard.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_dashboard.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_dashboard.setObjectName("frame_dashboard")
        self.speed = AnalogGaugeWidget(self.frame_dashboard)
        self.speed.setGeometry(QtCore.QRect(30, 50, 311, 281))
        self.speed.setStyleSheet("background-color: rgb(85, 85, 127);\n"
"border-radius:o px;")
        self.speed.setObjectName("speed")
        self.rpm = AnalogGaugeWidget(self.frame_dashboard)
        self.rpm.setGeometry(QtCore.QRect(630, 50, 311, 281))
        self.rpm.setStyleSheet("background-color: rgb(85, 85, 127);\n"
"border-radius:o px;")
        self.rpm.setObjectName("rpm")
        self.frame_2 = QtWidgets.QFrame(self.frame_dashboard)
        self.frame_2.setGeometry(QtCore.QRect(350, 30, 263, 38))
        self.frame_2.setStyleSheet("QFrame{\n"
"background-color: rgba(85, 85, 127,80);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QLabel{\n"
"background:None;\n"
"}")
        self.frame_2.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_2.setObjectName("frame_2")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout(self.frame_2)
        self.horizontalLayout_2.setContentsMargins(0, 3, 0, 3)
        self.horizontalLayout_2.setSpacing(20)
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.label_10 = QtWidgets.QLabel(self.frame_2)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.label_10.sizePolicy().hasHeightForWidth())
        self.label_10.setSizePolicy(sizePolicy)
        self.label_10.setMaximumSize(QtCore.QSize(40, 35))
        self.label_10.setText("")
        self.label_10.setPixmap(QtGui.QPixmap(":/icon/steering.png"))
        self.label_10.setScaledContents(True)
        self.label_10.setObjectName("label_10")
        self.horizontalLayout_2.addWidget(self.label_10)
        self.label_13 = QtWidgets.QLabel(self.frame_2)
        self.label_13.setMaximumSize(QtCore.QSize(40, 35))
        self.label_13.setText("")
        self.label_13.setPixmap(QtGui.QPixmap(":/icon/702814.png"))
        self.label_13.setScaledContents(True)
        self.label_13.setObjectName("label_13")
        self.horizontalLayout_2.addWidget(self.label_13)
        self.label_11 = QtWidgets.QLabel(self.frame_2)
        self.label_11.setMaximumSize(QtCore.QSize(40, 35))
        self.label_11.setText("")
        self.label_11.setPixmap(QtGui.QPixmap(":/icon/748151.png"))
        self.label_11.setScaledContents(True)
        self.label_11.setObjectName("label_11")
        self.horizontalLayout_2.addWidget(self.label_11)
        self.label_12 = QtWidgets.QLabel(self.frame_2)
        self.label_12.setMaximumSize(QtCore.QSize(40, 35))
        self.label_12.setText("")
        self.label_12.setPixmap(QtGui.QPixmap(":/icon/1442194.png"))
        self.label_12.setScaledContents(True)
        self.label_12.setObjectName("label_12")
        self.horizontalLayout_2.addWidget(self.label_12)
        self.frame_3 = QtWidgets.QFrame(self.frame_dashboard)
        self.frame_3.setGeometry(QtCore.QRect(370, 360, 221, 41))
        self.frame_3.setStyleSheet("background-color: rgba(85, 85, 127,80);\n"
"border-radius:15px;")
        self.frame_3.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_3.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_3.setObjectName("frame_3")
        self.date = QtWidgets.QLabel(self.frame_3)
        self.date.setGeometry(QtCore.QRect(30, 0, 171, 41))
        self.date.setStyleSheet("color:#fff;\n"
"font: 12pt \"MS UI Gothic\";\n"
"background:None;")
        self.date.setAlignment(QtCore.Qt.AlignCenter)
        self.date.setObjectName("date")
        self.car_state = QtWidgets.QFrame(self.frame_dashboard)
        self.car_state.setGeometry(QtCore.QRect(350, 80, 271, 251))
        self.car_state.setStyleSheet("background:None;\n"
"color:#ee1111;")
        self.car_state.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.car_state.setFrameShadow(QtWidgets.QFrame.Raised)
        self.car_state.setObjectName("car_state")
        self.label_3 = QtWidgets.QLabel(self.car_state)
        self.label_3.setGeometry(QtCore.QRect(50, 10, 181, 231))
        self.label_3.setStyleSheet("background:None")
        self.label_3.setText("")
        self.label_3.setPixmap(QtGui.QPixmap(":/icon/car.png"))
        self.label_3.setScaledContents(True)
        self.label_3.setObjectName("label_3")
        self.label_7 = QtWidgets.QLabel(self.car_state)
        self.label_7.setGeometry(QtCore.QRect(200, 150, 41, 16))
        self.label_7.setObjectName("label_7")
        self.label_5 = QtWidgets.QLabel(self.car_state)
        self.label_5.setGeometry(QtCore.QRect(200, 110, 31, 16))
        self.label_5.setStyleSheet("color:green;")
        self.label_5.setObjectName("label_5")
        self.label_4 = QtWidgets.QLabel(self.car_state)
        self.label_4.setGeometry(QtCore.QRect(40, 110, 41, 16))
        self.label_4.setObjectName("label_4")
        self.label_8 = QtWidgets.QLabel(self.car_state)
        self.label_8.setGeometry(QtCore.QRect(120, 50, 41, 16))
        self.label_8.setObjectName("label_8")
        self.label_9 = QtWidgets.QLabel(self.car_state)
        self.label_9.setGeometry(QtCore.QRect(120, 190, 55, 16))
        self.label_9.setStyleSheet("")
        self.label_9.setObjectName("label_9")
        self.label_6 = QtWidgets.QLabel(self.car_state)
        self.label_6.setGeometry(QtCore.QRect(40, 150, 41, 16))
        self.label_6.setObjectName("label_6")
        self.frame_4 = QtWidgets.QFrame(self.frame_dashboard)
        self.frame_4.setGeometry(QtCore.QRect(730, 340, 141, 42))
        self.frame_4.setStyleSheet("background-color: rgb(0, 85, 127,130);\n"
"border-radius:15px;")
        self.frame_4.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_4.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_4.setObjectName("frame_4")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.frame_4)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.label_14 = QtWidgets.QLabel(self.frame_4)
        self.label_14.setStyleSheet("color:#fff;\n"
"font: 12pt \"MS UI Gothic\";\n"
"background:None;")
        self.label_14.setAlignment(QtCore.Qt.AlignCenter)
        self.label_14.setObjectName("label_14")
        self.horizontalLayout_3.addWidget(self.label_14)
        self.progressBar_2 = QtWidgets.QProgressBar(self.frame_4)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.progressBar_2.sizePolicy().hasHeightForWidth())
        self.progressBar_2.setSizePolicy(sizePolicy)
        self.progressBar_2.setMinimumSize(QtCore.QSize(75, 0))
        self.progressBar_2.setStyleSheet("QProgressBar{\n"
"    background-color : rgb(141, 144, 147);\n"
"    \n"
"    color: rgb(0, 0, 0);\n"
"    border-style: none;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"    border-radius: 5px;\n"
"    \n"
"    background-color: rgb(227,162,26,150);\n"
"}")
        
        self.progressBar_2.setProperty("value", 60)
        self.progressBar_2.setTextVisible(False)
        self.progressBar_2.setOrientation(QtCore.Qt.Horizontal)
        self.progressBar_2.setInvertedAppearance(False)
        self.progressBar_2.setTextDirection(QtWidgets.QProgressBar.TopToBottom)
        self.progressBar_2.setFormat("")
        self.progressBar_2.setObjectName("progressBar_2")
        self.horizontalLayout_3.addWidget(self.progressBar_2)
        self.frame_5 = QtWidgets.QFrame(self.frame_dashboard)
        self.frame_5.setGeometry(QtCore.QRect(100, 340, 141, 42))
        self.frame_5.setStyleSheet("background-color: rgb(152, 57, 38,100);\n"
"border-radius:15px;")
        self.frame_5.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_5.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_5.setObjectName("frame_5")
        self.horizontalLayout_4 = QtWidgets.QHBoxLayout(self.frame_5)
        self.horizontalLayout_4.setObjectName("horizontalLayout_4")
        self.label_15 = QtWidgets.QLabel(self.frame_5)
        self.label_15.setStyleSheet("color:#fff;\n"
"font: 10pt \"MS UI Gothic\";\n"
"background:None;")
        self.label_15.setAlignment(QtCore.Qt.AlignCenter)
        self.label_15.setObjectName("label_15")
        self.horizontalLayout_4.addWidget(self.label_15)
        self.label_16 = QtWidgets.QLabel(self.centralwidget)
        self.label_16.setGeometry(QtCore.QRect(460, 579, 181, 31))
        self.label_16.setStyleSheet("background:None;\n"
"color:#fff;")
        self.label_16.setAlignment(QtCore.Qt.AlignCenter)
        self.label_16.setObjectName("label_16")
        self.frame_AC = QtWidgets.QFrame(self.centralwidget)
        self.frame_AC.setGeometry(QtCore.QRect(70, 120, 971, 411))
        self.frame_AC.setStyleSheet("QFrame{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(34, 46, 61), stop:1 rgba(34, 34, 47));\n"
"\n"
"border-radius:200px;\n"
"\n"
"}")
        self.current_datetime = datetime.now()
        self.formatted_datetime = self.current_datetime.strftime("Date - %Y-%m-%d \n Time - %H:%M:%S")
        self.precipitation = 40
        self.humidity = 70
        self.wind_speed = 32
        self.inTemp = 40
        self.outTemp = 30
        self.frame_AC.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_AC.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_AC.setObjectName("frame_AC")
        self.circularProgressCPU = QtWidgets.QFrame(self.frame_AC)
        self.circularProgressCPU.setGeometry(QtCore.QRect(720, 80, 220, 220))
        self.circularProgressCPU.setStyleSheet("QFrame{\n"
"    border-radius: 110px;    \n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:90, stop:0.68 rgba(85, 170, 255, 255), stop:0.612 rgba(255, 255, 255, 0));\n"
"}")
        self.circularProgressCPU.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.circularProgressCPU.setFrameShadow(QtWidgets.QFrame.Raised)
        self.circularProgressCPU.setObjectName("circularProgressCPU")
        self.circularOutdoor = QtWidgets.QFrame(self.circularProgressCPU)
        self.circularOutdoor.setGeometry(QtCore.QRect(15, 15, 190, 190))
        self.circularOutdoor.setBaseSize(QtCore.QSize(0, 0))
        self.circularOutdoor.setStyleSheet("QFrame{\n"
"    border-radius: 95px;    \n"
"    background-color: rgb(58, 58, 102);\n"
"}")
        self.circularOutdoor.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.circularOutdoor.setFrameShadow(QtWidgets.QFrame.Raised)
        self.circularOutdoor.setObjectName("circularOutdoor")
        self.labelPercentageCPU = QtWidgets.QLabel(self.circularOutdoor)
        self.labelPercentageCPU.setGeometry(QtCore.QRect(40, 50, 132, 100))
        font = QtGui.QFont()
        font.setFamily("Roboto Thin")
        font.setPointSize(30)
        self.labelPercentageCPU.setFont(font)
        self.labelPercentageCPU.setStyleSheet("color: rgb(115, 185, 255); padding: 0px; background-color: none;")
        self.labelPercentageCPU.setAlignment(QtCore.Qt.AlignCenter)
        self.labelPercentageCPU.setIndent(-1)
        self.labelPercentageCPU.setObjectName("labelPercentageCPU")
        self.label_19 = QtWidgets.QLabel(self.circularOutdoor)
        self.label_19.setGeometry(QtCore.QRect(40, 30, 131, 51))
        font = QtGui.QFont()
        font.setFamily("Nirmala UI")
        font.setPointSize(10)
        self.label_19.setFont(font)
        self.label_19.setStyleSheet("QLabel\n"
"{\n"
"background:None;\n"
"color:rgb(255,255,255,100);\n"
"}")
        self.label_19.setAlignment(QtCore.Qt.AlignCenter)
        self.label_19.setObjectName("label_19")
        self.weather = QtWidgets.QFrame(self.frame_AC)
        self.weather.setGeometry(QtCore.QRect(330, 10, 341, 351))
        self.weather.setStyleSheet("QFrame{\n"
"border-radius:5px;\n"
"background-color: rgb(14, 22, 39);\n"
"}")
        self.weather.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.weather.setFrameShadow(QtWidgets.QFrame.Raised)
        self.weather.setObjectName("weather")
        self.label_18 = QtWidgets.QLabel(self.weather)
        self.label_18.setGeometry(QtCore.QRect(50, 10, 261, 20))
        font = QtGui.QFont()
        font.setFamily("Nirmala UI")
        font.setPointSize(12)
        self.label_18.setFont(font)
        self.label_18.setStyleSheet("QLabel\n"
"{\n"
"background:None;\n"
"color:rgb(227,162,26);\n"
"}")
        self.label_18.setAlignment(QtCore.Qt.AlignCenter)
        self.label_18.setObjectName("label_18")
        self.label_2 = QtWidgets.QLabel(self.weather)
        self.label_2.setGeometry(QtCore.QRect(10, 60, 101, 81))
        self.label_2.setText("")
        self.label_2.setPixmap(QtGui.QPixmap(":/icons/p.png"))
        self.label_2.setScaledContents(True)
        self.label_2.setObjectName("label_2")
        self.label_17 = QtWidgets.QLabel(self.weather)
        self.label_17.setGeometry(QtCore.QRect(210, 60, 121, 81))
        self.label_17.setStyleSheet("color:#fff")
        self.label_17.setObjectName("label_17")
        self.frame_6 = QtWidgets.QFrame(self.weather)
        self.frame_6.setGeometry(QtCore.QRect(30, 250, 281, 81))
        self.frame_6.setStyleSheet("color:#fff;")
        self.frame_6.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_6.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_6.setObjectName("frame_6")

        ############################
        self.gridLayout = QtWidgets.QGridLayout(self.frame_6)
        self.gridLayout.setContentsMargins(0, 0, 0, 0)
        self.gridLayout.setHorizontalSpacing(30)
        self.gridLayout.setVerticalSpacing(11)
        self.gridLayout.setObjectName("gridLayout")
        self.dial = QtWidgets.QDial(self.frame_6)
        self.dial.setRange(0, 100)
        self.dial.setValue(25)
        self.dial.valueChanged.connect(self.dial_moved)
        self.dial.setGeometry(QtCore.QRect(100, 100, 220, 220))
        self.dial.setInvertedAppearance(False)
        self.dial.setInvertedControls(False)
        self.dial.setWrapping(False)
        self.dial.setNotchesVisible(False)
        self.dial.setObjectName("dial")
        self.gridLayout.addWidget(self.dial, 0, 0, 1, 1)

        self.dial_2 = QtWidgets.QDial(self.frame_6)
        self.dial_2.setRange(0, 100)
        self.dial_2.setValue(25)
        self.dial_2.valueChanged.connect(self.dial2_moved)
        self.dial_2.setGeometry(QtCore.QRect(730, 100, 220, 220))
        self.dial_2.setInvertedAppearance(False)
        self.dial_2.setInvertedControls(False)
        self.dial_2.setWrapping(False)
        self.dial_2.setNotchesVisible(False)
        self.dial_2.setObjectName("dial_2")
        self.gridLayout.addWidget(self.dial_2, 0, 2, 1, 1)
        ###########################
        # self.gridLayout = QtWidgets.QGridLayout(self.frame_6)
        # self.gridLayout.setContentsMargins(0, 0, 0, 0)
        # self.gridLayout.setHorizontalSpacing(30)
        # self.gridLayout.setVerticalSpacing(11)
        # self.gridLayout.setObjectName("gridLayout")
        # self.label_24 = QtWidgets.QLabel(self.frame_6)
        # self.label_24.setText("")
        # self.label_24.setPixmap(QtGui.QPixmap(":/bg/289759.png"))
        # self.label_24.setScaledContents(True)
        # self.label_24.setObjectName("label_24")
        # self.gridLayout.addWidget(self.label_24, 0, 2, 1, 1)
        # self.label_23 = QtWidgets.QLabel(self.frame_6)
        # self.label_23.setText("")
        # self.label_23.setPixmap(QtGui.QPixmap(":/icons/95252.png"))
        # self.label_23.setScaledContents(True)
        # self.label_23.setObjectName("label_23")
        # self.gridLayout.addWidget(self.label_23, 0, 1, 1, 1)
        # self.label_22 = QtWidgets.QLabel(self.frame_6)
        # sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Fixed, QtWidgets.QSizePolicy.Fixed)
        # sizePolicy.setHorizontalStretch(0)
        # sizePolicy.setVerticalStretch(0)
        # sizePolicy.setHeightForWidth(self.label_22.sizePolicy().hasHeightForWidth())
        # self.label_22.setSizePolicy(sizePolicy)
        # self.label_22.setStyleSheet("")
        # self.label_22.setText("")
        # self.label_22.setPixmap(QtGui.QPixmap(":/icons/567255.png"))
        # self.label_22.setScaledContents(True)
        # self.label_22.setObjectName("label_22")
        # self.gridLayout.addWidget(self.label_22, 0, 0, 1, 1)
        self.label_25 = QtWidgets.QLabel(self.frame_6)
        self.label_25.setAlignment(QtCore.Qt.AlignCenter)
        self.label_25.setObjectName("label_25")
        self.gridLayout.addWidget(self.label_25, 1, 0, 1, 1)
        self.label_26 = QtWidgets.QLabel(self.frame_6)
        self.label_26.setAlignment(QtCore.Qt.AlignCenter)
        self.label_26.setObjectName("label_26")
        self.gridLayout.addWidget(self.label_26, 1, 1, 1, 1)
        self.label_27 = QtWidgets.QLabel(self.frame_6)
        self.label_27.setAlignment(QtCore.Qt.AlignCenter)
        self.label_27.setObjectName("label_27")
        self.gridLayout.addWidget(self.label_27, 1, 2, 1, 1)
        self.labelPercentageCPU_4 = QtWidgets.QLabel(self.weather)
        self.labelPercentageCPU_4.setGeometry(QtCore.QRect(110, 80, 71, 41))
        font = QtGui.QFont()
        font.setFamily("Roboto Thin")
        font.setPointSize(13)
        self.labelPercentageCPU_4.setFont(font)
        self.labelPercentageCPU_4.setStyleSheet("color: rgb(115, 185, 255,70); \n"
"padding: 0px;\n"
" background-color: none;")
        self.labelPercentageCPU_4.setAlignment(QtCore.Qt.AlignCenter)
        self.labelPercentageCPU_4.setIndent(-1)
        self.labelPercentageCPU_4.setObjectName("labelPercentageCPU_4")
        self.line = QtWidgets.QFrame(self.weather)
        self.line.setGeometry(QtCore.QRect(194, 81, 3, 40))
        self.line.setStyleSheet("background-color: rgba(85, 85, 255,120);")
        self.line.setFrameShape(QtWidgets.QFrame.VLine)
        self.line.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line.setObjectName("line")
        self.circularIndoor = QtWidgets.QFrame(self.frame_AC)
        self.circularIndoor.setGeometry(QtCore.QRect(70, 90, 220, 220))
        self.circularIndoor.setStyleSheet("QFrame{\n"
"    border-radius: 110px;    \n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:90, stop:0.88 rgba(255,196,13,255), stop:0.712 rgba(255, 255, 255, 0));\n"
"}")
        self.circularIndoor.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.circularIndoor.setFrameShadow(QtWidgets.QFrame.Raised)
        self.circularIndoor.setObjectName("circularIndoor")
        self.circularOutdoor_2 = QtWidgets.QFrame(self.circularIndoor)
        self.circularOutdoor_2.setGeometry(QtCore.QRect(15, 15, 190, 190))
        self.circularOutdoor_2.setBaseSize(QtCore.QSize(0, 0))
        self.circularOutdoor_2.setStyleSheet("QFrame{\n"
"    border-radius: 95px;    \n"
"    background-color: rgb(43,87,151);\n"
"}")
        self.circularOutdoor_2.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.circularOutdoor_2.setFrameShadow(QtWidgets.QFrame.Raised)
        self.circularOutdoor_2.setObjectName("circularOutdoor_2")
        self.labelPercentageCPU_3 = QtWidgets.QLabel(self.circularOutdoor_2)
        self.labelPercentageCPU_3.setGeometry(QtCore.QRect(40, 50, 132, 100))
        font = QtGui.QFont()
        font.setFamily("Roboto Thin")
        font.setPointSize(30)
        self.labelPercentageCPU_3.setFont(font)
        self.labelPercentageCPU_3.setStyleSheet("color: rgb(115, 185, 255); padding: 0px; background-color: none;")
        self.labelPercentageCPU_3.setAlignment(QtCore.Qt.AlignCenter)
        self.labelPercentageCPU_3.setIndent(-1)
        self.labelPercentageCPU_3.setObjectName("labelPercentageCPU_3")
        self.label_21 = QtWidgets.QLabel(self.circularOutdoor_2)
        self.label_21.setGeometry(QtCore.QRect(40, 30, 131, 51))
        font = QtGui.QFont()
        font.setFamily("Nirmala UI")
        font.setPointSize(10)
        self.label_21.setFont(font)
        self.label_21.setStyleSheet("QLabel\n"
"{\n"
"background:None;\n"
"color:rgb(255,255,255,100);\n"
"}")
        self.label_21.setAlignment(QtCore.Qt.AlignCenter)
        self.label_21.setObjectName("label_21")
        self.checked =AnimatedToggle(self.frame_AC)
        self.checked.setGeometry(QtCore.QRect(140, 310, 100, 50))
        MainWindow.setCentralWidget(self.centralwidget)
        self.show_Dash()
        self.progress()
        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.label_km = QLabel(self.speed)
        self.label_km.setText("Km/h")
        self.label_km.setGeometry(QRect(130, 190, 57, 16))
        self.label_km.setStyleSheet(u"\n"
"color:#fff;\n"
"    font: 15pt;\n"
"background:None;\n"
"\n"
)
        self.label_km.setAlignment(Qt.AlignCenter)
        global timer
        self.timer = QTimer()
        self.timer.timeout.connect(self.update_dashboard)
        self.timer.start(100)
        self.dial1_value = 25
        self.dial2_value = 25
      

#     def controlTimer(self):
#         if not self.timer.isActive():
#             self.timer.start(20)
#         else:
#             self.timer.stop()
    def dial_moved(self, fan_level):
        self.dial1_value = fan_level

    def dial2_moved(self, ac_level):
        self.dial2_value = ac_level
   


    def update_dashboard(self):
        _translate = QtCore.QCoreApplication.translate
        # global dial1_value
        print(f"Dial value: {self.dial1_value}") 
        
        try:
                line = q.get_nowait()
                msg = line.decode('utf-8').split()
                can_id = msg[1]
                
                if(can_id == '123'):
                        new_speed = int(msg[3],16)
                        new_rpm = int(msg[4],16)
                        new_fuel_level = int(msg[5],16)
                        #update speed information
                        self.speed.update_value(new_speed)
                        #update rpm information
                        self.rpm.update_value(new_rpm)
                        #update fuel_level
                        self.progressBar_2.setProperty("value",new_fuel_level)
                elif(can_id =='456'):
                        self.humidity = int(msg[3],16)
                        self.precipitation = int(msg[4],16)
                        self.wind_speed = int(msg[5],16)
                        self.inTemp = int(msg[6],16)
                        self.outTemp = int(msg[7],16)
                        # print(int(msg[3],16))
                elif(can_id == '789'):
                        if(int(msg[3],16) == 0):
                                self.label_4.setStyleSheet("color:green;")
                                self.label_4.setText(_translate("MainWindow", "Open"))
                        else:
                              self.label_4.setStyleSheet("color:red;")
                              self.label_4.setText(_translate("MainWindow", "Locked"))
                              self.label_4.adjustSize()
                        if(int(msg[4],16) == 0):
                                self.label_5.setStyleSheet("color:green;")
                                self.label_5.setText(_translate("MainWindow", "Open"))
                        else:
                              self.label_5.setStyleSheet("color:red;")
                              self.label_5.setText(_translate("MainWindow", "Locked"))
                              self.label_5.adjustSize()
                        if(int(msg[5],16) == 0):
                                self.label_6.setStyleSheet("color:green;")
                                self.label_6.setText(_translate("MainWindow", "Open"))
                        else:
                              self.label_6.setStyleSheet("color:red;")
                              self.label_6.setText(_translate("MainWindow", "Locked"))
                              self.label_6.adjustSize()
                        if(int(msg[6],16) == 0):
                                self.label_7.setStyleSheet("color:green;")
                                self.label_7.setText(_translate("MainWindow", "Open"))
                        else:
                              self.label_7.setStyleSheet("color:red;")
                              self.label_7.setText(_translate("MainWindow", "Locked"))
                              self.label_7.adjustSize()
                        if(int(msg[7],16) == 0):
                                self.label_8.setStyleSheet("color:green;")
                                self.label_8.setText(_translate("MainWindow", "Open"))
                        else:
                              self.label_8.setStyleSheet("color:red;")
                              self.label_8.setText(_translate("MainWindow", "Locked"))
                              self.label_8.adjustSize()
                        if(int(msg[8],16) == 0):
                                self.label_9.setStyleSheet("color:green;")
                                self.label_9.setText(_translate("MainWindow", "Open"))
                        else:
                              self.label_9.setStyleSheet("color:red;")
                              self.label_9.setText(_translate("MainWindow", "Locked"))
                              self.label_9.adjustSize()
                
        except queue.Empty: 
                pass # Get next line  
   
        current_datetime = datetime.now()
        self.formatted_datetime = current_datetime.strftime("Date - %Y-%m-%d \n Time - %H:%M:%S")
        #print(self.formatted_datetime)
        #update date and time
        self.date.setText(_translate("MainWindow", self.formatted_datetime))
        #update indoor temp
        self.labelPercentageCPU.setText(_translate("MainWindow", f"<html><head/><body><p>{self.inTemp}°C</p></body></html>"))
        #update weather information
        self.label_17.setText(_translate(
            "MainWindow", 
            f"Precipitation: {self.precipitation}%\nHumidity: {self.humidity}%\nWind: {self.wind_speed} km/h"
        ))
        #update outdoor temperature
        self.labelPercentageCPU_3.setText(_translate("MainWindow", f"<html><head/><body><p>{self.outTemp}°C</p></body></html>"))
        


    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("CAR DASHBOARD", "MainWindow"))
        self.btn_dash.setText(_translate("MainWindow", "DASHBOARD"))
        self.btn_ac.setText(_translate("MainWindow", "AC"))
        self.date.setText(_translate("MainWindow", self.formatted_datetime))
        self.date.adjustSize()
        self.label_7.setText(_translate("MainWindow", "Locked"))
        self.label_5.setText(_translate("MainWindow", "Open"))
        self.label_4.setText(_translate("MainWindow", "Locked"))
        self.label_8.setText(_translate("MainWindow", "Locked"))
        self.label_9.setText(_translate("MainWindow", "Locked"))
        self.label_6.setText(_translate("MainWindow", "Locked"))
        self.label_14.setText(_translate("MainWindow", "Fuel:"))
        self.label_15.setText(_translate("MainWindow", "Door Unlocked"))
        self.label_16.setText(_translate("MainWindow", "(C)Ajender-Mallikarjuna"))
        self.labelPercentageCPU.setText(_translate("MainWindow", f"<html><head/><body><p>{self.inTemp}°C</p></body></html>"))
        self.label_19.setText(_translate("MainWindow", "Outdoor\n"
"Temperature"))
        self.label_18.setText(_translate("MainWindow", "Weather Forecast"))
        self.label_17.setText(_translate(
            "MainWindow", 
            f"Precipitation: {self.precipitation}%\nHumidity: {self.humidity}%\nWind: {self.wind_speed} km/h"
        ))
        self.label_25.setText(_translate("MainWindow","FAN"))
        #self.label_26.setText(_translate("MainWindow", "Mode2"))
        self.label_27.setText(_translate("MainWindow", "AC level"))
        self.labelPercentageCPU_4.setText(_translate("MainWindow", "<html><head/><body><p>Cloudy</p></body></html>"))
        self.labelPercentageCPU_3.setText(_translate("MainWindow", f"<html><head/><body><p>{self.outTemp}°C</p></body></html>"))
        self.label_21.setText(_translate("MainWindow", "Indoor\n"
"Temperature"))
        self.checked.setText(_translate("MainWindow", "PushButton"))
        self.btn_dash.clicked.connect(self.show_Dash)
        self.btn_ac.clicked.connect(self.show_AC)




    def show_Dash(self):
        self.frame_dashboard.setVisible(True)
        self.frame_AC.setVisible(False)





    def show_AC(self):
        self.frame_dashboard.setVisible(False)
        self.frame_AC.setVisible(True)


    def progress(self):
        self.speed.set_MaxValue(100)
        self.speed.set_DisplayValueColor(200,200,200)
        self.speed.set_CenterPointColor(255,255,255)
        self.speed.set_NeedleColor(255,255,200)
        self.speed.set_NeedleColorDrag(255,255,255)
        self.speed.set_ScaleValueColor(255,200,255)
        self.speed.set_enable_big_scaled_grid(True)
        self.speed.set_enable_barGraph(True)
        self.speed.set_enable_filled_Polygon(True)
        self.speed.update_value(40)


        self.rpm.set_scala_main_count(6)
        self.rpm.set_MaxValue(6)
        self.rpm.set_MinValue(0)
        self.rpm.update_value(3.5)
        self.rpm.set_DisplayValueColor(200,200,200)
        self.rpm.set_enable_big_scaled_grid(True)
        self.rpm.set_ScaleValueColor(255,255,255)
        #self.rpm.set_NeedleColor(155,155,100)
        self.rpm.set_NeedleColorDrag(255,255,255)
        self.rpm.set_CenterPointColor(255,255,255)

    def send_thread(self):
        byte1 = hex(0)
        byte2 = hex(0)
        while True:
                if byte1 != self.dial1_value or byte2 != self.dial2_value:
                        byte1 = self.dial1_value
                        byte2 = self.dial2_value
                        can_id = hex(234)[2:]
                        msg = f'cansend vcan0 234#{self.dial1_value}{self.dial2_value}'
                        subprocess.call(msg, shell=True)
                        time.sleep(1)

def enqueue_output(out, queue):
    for line in iter(out.readline, b''):
        queue.put(line)
    out.close()




import resources

if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    q = queue.Queue()

    proc = subprocess.Popen(['candump', 'vcan0'], 
                                stdout=subprocess.PIPE,
                                stderr=subprocess.PIPE)

    t = threading.Thread(target=enqueue_output, args=(proc.stdout, q))
    t.daemon = True 
    t.start()
        # Create thread 
    send = threading.Thread(target=ui.send_thread)
    send.daemon = True
    send.start()
#     while True:
#         try:
#                 line = q.get_nowait()
#                 # Process line here 
#                 print(line)
                
#         except queue.Empty: 
#                 pass # Get next line  
#     proc.terminate()
    sys.exit(app.exec_())
