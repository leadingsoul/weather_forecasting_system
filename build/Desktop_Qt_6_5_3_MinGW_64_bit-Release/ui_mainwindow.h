/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *wLayoutLeft_centetr;
    QLabel *icon;
    QLabel *todayWendu;
    QLabel *cityLabel;
    QLabel *Ganmao;
    QLabel *label_3;
    QLabel *text;
    QLabel *feelsLikeLable;
    QWidget *widget_2;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_5;
    QLabel *dew;
    QLabel *pressure;
    QLabel *labelvis;
    QLabel *humidity;
    QLabel *windDir;
    QLabel *quality;
    QLabel *qualitylevel;
    QLabel *feelsLike;
    QWidget *LayoutRight_Center;
    QLabel *cityLabel_2;
    QLabel *feelsLikeLable_2;
    QLabel *ziwaixianImage;
    QLabel *yuexiangIcon;
    QLabel *feelsLikeLable_3;
    QLabel *ziwaixian;
    QLabel *yuexiang;
    QLabel *yunduo_6;
    QLabel *feelsLikeLable_5;
    QLabel *yunduo_7;
    QLabel *feelsLikeLable_6;
    QLabel *sunrise;
    QLabel *sunset;
    QLabel *suntime;
    QLabel *suntime_2;
    QWidget *widget_LayoutButtom;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *popTime1;
    QLabel *popTime2;
    QLabel *popTime3;
    QLabel *popTime4;
    QLabel *popTime5;
    QLabel *popTime6;
    QLabel *popTime7;
    QLabel *popTime8;
    QLabel *popTime10;
    QLabel *popTime11;
    QLabel *popTime12;
    QLabel *popTime9;
    QLabel *tempCurve;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *hourTime1;
    QLabel *hourTime2;
    QLabel *hourTime3;
    QLabel *hourTime4;
    QLabel *hourTime5;
    QLabel *hourTime6;
    QLabel *hourTime7;
    QLabel *hourTime8;
    QLabel *hourTime9;
    QLabel *hourTime10;
    QLabel *hourTime11;
    QLabel *hourTime12;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *widget_3;
    QWidget *widget_4;
    QLabel *ldate1;
    QLabel *IconDay1;
    QLabel *tempMax1;
    QLabel *tempMin1;
    QLabel *cloud;
    QLabel *yunduo;
    QLabel *xiayulabel;
    QLabel *yunduo_2;
    QLabel *cloudLabel;
    QLabel *xiayu;
    QWidget *widget_5;
    QLabel *date2;
    QLabel *week2;
    QLabel *IconDay2;
    QLabel *tempMax2;
    QLabel *tempMin2;
    QWidget *widget_6;
    QLabel *date3;
    QLabel *week3;
    QLabel *IconDay3;
    QLabel *tempMax3;
    QLabel *tempMin3;
    QWidget *widget_7;
    QLabel *date4;
    QLabel *week4;
    QLabel *IconDay4;
    QLabel *tempMax4;
    QLabel *tempMin4;
    QWidget *widget_8;
    QLabel *week5;
    QLabel *date5;
    QLabel *IconDay5;
    QLabel *tempMax5;
    QLabel *tempMin5;
    QWidget *widget_9;
    QLabel *date6;
    QLabel *week6;
    QLabel *IconDay6;
    QLabel *tempMax6;
    QLabel *tempMin6;
    QWidget *widget_10;
    QLabel *date7;
    QLabel *week7;
    QLabel *IconDay7;
    QLabel *tempMax7;
    QLabel *tempMin7;
    QWidget *widget_layoutTop;
    QLineEdit *searchEdit;
    QLabel *label_32;
    QLabel *date1;
    QPushButton *searchbtn;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 900);
        MainWindow->setMinimumSize(QSize(1200, 900));
        MainWindow->setMaximumSize(QSize(1200, 900));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1201, 901));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0.556818 rgba(77, 60, 142, 255), stop:1 rgba(48, 56, 142, 255));"));
        wLayoutLeft_centetr = new QWidget(widget);
        wLayoutLeft_centetr->setObjectName("wLayoutLeft_centetr");
        wLayoutLeft_centetr->setGeometry(QRect(10, 90, 571, 311));
        wLayoutLeft_centetr->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border-radius: 15px;\n"
"            "));
        icon = new QLabel(wLayoutLeft_centetr);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(30, 40, 121, 121));
        icon->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        todayWendu = new QLabel(wLayoutLeft_centetr);
        todayWendu->setObjectName("todayWendu");
        todayWendu->setGeometry(QRect(160, 60, 111, 81));
        todayWendu->setStyleSheet(QString::fromUtf8("font: 25 36px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        cityLabel = new QLabel(wLayoutLeft_centetr);
        cityLabel->setObjectName("cityLabel");
        cityLabel->setGeometry(QRect(20, 10, 181, 31));
        cityLabel->setStyleSheet(QString::fromUtf8("font: 25 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        Ganmao = new QLabel(wLayoutLeft_centetr);
        Ganmao->setObjectName("Ganmao");
        Ganmao->setGeometry(QRect(30, 160, 531, 61));
        Ganmao->setStyleSheet(QString::fromUtf8("font: 25 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        Ganmao->setWordWrap(true);
        label_3 = new QLabel(wLayoutLeft_centetr);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 20, 16, 16));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/res/fzIcon/xialajiantouxiao.png);\n"
"font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        text = new QLabel(wLayoutLeft_centetr);
        text->setObjectName("text");
        text->setGeometry(QRect(280, 60, 101, 31));
        text->setStyleSheet(QString::fromUtf8("font: 25 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        feelsLikeLable = new QLabel(wLayoutLeft_centetr);
        feelsLikeLable->setObjectName("feelsLikeLable");
        feelsLikeLable->setGeometry(QRect(280, 100, 61, 41));
        feelsLikeLable->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_2 = new QWidget(wLayoutLeft_centetr);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 221, 541, 71));
        widget_2->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(100, 20, 24, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(180, 20, 24, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        label_11 = new QLabel(widget_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(260, 20, 36, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(350, 20, 24, 16));
        label_14->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        label_16 = new QLabel(widget_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(430, 20, 24, 16));
        label_16->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 20, 48, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        dew = new QLabel(widget_2);
        dew->setObjectName("dew");
        dew->setGeometry(QRect(430, 40, 31, 16));
        dew->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        pressure = new QLabel(widget_2);
        pressure->setObjectName("pressure");
        pressure->setGeometry(QRect(350, 40, 61, 16));
        pressure->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        labelvis = new QLabel(widget_2);
        labelvis->setObjectName("labelvis");
        labelvis->setGeometry(QRect(260, 40, 48, 16));
        labelvis->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        humidity = new QLabel(widget_2);
        humidity->setObjectName("humidity");
        humidity->setGeometry(QRect(180, 40, 25, 16));
        humidity->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        windDir = new QLabel(widget_2);
        windDir->setObjectName("windDir");
        windDir->setGeometry(QRect(100, 40, 61, 16));
        windDir->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        quality = new QLabel(widget_2);
        quality->setObjectName("quality");
        quality->setGeometry(QRect(30, 40, 16, 16));
        quality->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        qualitylevel = new QLabel(widget_2);
        qualitylevel->setObjectName("qualitylevel");
        qualitylevel->setGeometry(QRect(10, 40, 16, 16));
        qualitylevel->setStyleSheet(QString::fromUtf8("\n"
"border: 1px ; \n"
"border-radius: 50%;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(196, 196, 196);\n"
""));
        feelsLike = new QLabel(wLayoutLeft_centetr);
        feelsLike->setObjectName("feelsLike");
        feelsLike->setGeometry(QRect(340, 100, 101, 41));
        feelsLike->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        LayoutRight_Center = new QWidget(widget);
        LayoutRight_Center->setObjectName("LayoutRight_Center");
        LayoutRight_Center->setGeometry(QRect(620, 90, 571, 311));
        LayoutRight_Center->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);\n"
"border-radius: 15px;"));
        cityLabel_2 = new QLabel(LayoutRight_Center);
        cityLabel_2->setObjectName("cityLabel_2");
        cityLabel_2->setGeometry(QRect(30, 20, 181, 31));
        cityLabel_2->setStyleSheet(QString::fromUtf8("font: 25 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        feelsLikeLable_2 = new QLabel(LayoutRight_Center);
        feelsLikeLable_2->setObjectName("feelsLikeLable_2");
        feelsLikeLable_2->setGeometry(QRect(60, 110, 81, 31));
        feelsLikeLable_2->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        ziwaixianImage = new QLabel(LayoutRight_Center);
        ziwaixianImage->setObjectName("ziwaixianImage");
        ziwaixianImage->setGeometry(QRect(30, 119, 31, 31));
        ziwaixianImage->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"image: url(:/res/icon/icons/100.svg);\n"
""));
        yuexiangIcon = new QLabel(LayoutRight_Center);
        yuexiangIcon->setObjectName("yuexiangIcon");
        yuexiangIcon->setGeometry(QRect(30, 210, 31, 31));
        yuexiangIcon->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
""));
        feelsLikeLable_3 = new QLabel(LayoutRight_Center);
        feelsLikeLable_3->setObjectName("feelsLikeLable_3");
        feelsLikeLable_3->setGeometry(QRect(60, 200, 81, 31));
        feelsLikeLable_3->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        ziwaixian = new QLabel(LayoutRight_Center);
        ziwaixian->setObjectName("ziwaixian");
        ziwaixian->setGeometry(QRect(60, 130, 81, 31));
        ziwaixian->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        yuexiang = new QLabel(LayoutRight_Center);
        yuexiang->setObjectName("yuexiang");
        yuexiang->setGeometry(QRect(60, 220, 81, 31));
        yuexiang->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        yunduo_6 = new QLabel(LayoutRight_Center);
        yunduo_6->setObjectName("yunduo_6");
        yunduo_6->setGeometry(QRect(470, 130, 41, 41));
        yunduo_6->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"image: url(:/res/rila.svg);\n"
""));
        feelsLikeLable_5 = new QLabel(LayoutRight_Center);
        feelsLikeLable_5->setObjectName("feelsLikeLable_5");
        feelsLikeLable_5->setGeometry(QRect(480, 160, 31, 31));
        feelsLikeLable_5->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        yunduo_7 = new QLabel(LayoutRight_Center);
        yunduo_7->setObjectName("yunduo_7");
        yunduo_7->setGeometry(QRect(260, 130, 41, 41));
        yunduo_7->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"image: url(:/res/richu.svg);\n"
""));
        feelsLikeLable_6 = new QLabel(LayoutRight_Center);
        feelsLikeLable_6->setObjectName("feelsLikeLable_6");
        feelsLikeLable_6->setGeometry(QRect(270, 160, 31, 31));
        feelsLikeLable_6->setStyleSheet(QString::fromUtf8("font: 25 13px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        sunrise = new QLabel(LayoutRight_Center);
        sunrise->setObjectName("sunrise");
        sunrise->setGeometry(QRect(260, 180, 41, 19));
        sunrise->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        sunrise->setAlignment(Qt::AlignCenter);
        sunset = new QLabel(LayoutRight_Center);
        sunset->setObjectName("sunset");
        sunset->setGeometry(QRect(470, 180, 41, 19));
        sunset->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        sunset->setAlignment(Qt::AlignCenter);
        suntime = new QLabel(LayoutRight_Center);
        suntime->setObjectName("suntime");
        suntime->setGeometry(QRect(350, 160, 121, 20));
        suntime->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        suntime->setAlignment(Qt::AlignCenter);
        suntime_2 = new QLabel(LayoutRight_Center);
        suntime_2->setObjectName("suntime_2");
        suntime_2->setGeometry(QRect(300, 160, 61, 20));
        suntime_2->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        suntime_2->setAlignment(Qt::AlignCenter);
        widget_LayoutButtom = new QWidget(widget);
        widget_LayoutButtom->setObjectName("widget_LayoutButtom");
        widget_LayoutButtom->setGeometry(QRect(10, 570, 1181, 301));
        widget_LayoutButtom->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 5);\n"
"border-radius: 15px;"));
        pushButton = new QPushButton(widget_LayoutButtom);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 25 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget1 = new QWidget(widget_LayoutButtom);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 250, 1171, 28));
        widget1->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255,0);\n"
"\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        popTime1 = new QLabel(widget1);
        popTime1->setObjectName("popTime1");
        popTime1->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
"\n"
""));
        popTime1->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime1);

        popTime2 = new QLabel(widget1);
        popTime2->setObjectName("popTime2");
        popTime2->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime2);

        popTime3 = new QLabel(widget1);
        popTime3->setObjectName("popTime3");
        popTime3->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime3);

        popTime4 = new QLabel(widget1);
        popTime4->setObjectName("popTime4");
        popTime4->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime4);

        popTime5 = new QLabel(widget1);
        popTime5->setObjectName("popTime5");
        popTime5->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime5);

        popTime6 = new QLabel(widget1);
        popTime6->setObjectName("popTime6");
        popTime6->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime6);

        popTime7 = new QLabel(widget1);
        popTime7->setObjectName("popTime7");
        popTime7->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime7);

        popTime8 = new QLabel(widget1);
        popTime8->setObjectName("popTime8");
        popTime8->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime8->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime8);

        popTime10 = new QLabel(widget1);
        popTime10->setObjectName("popTime10");
        popTime10->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime10);

        popTime11 = new QLabel(widget1);
        popTime11->setObjectName("popTime11");
        popTime11->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime11->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime11);

        popTime12 = new QLabel(widget1);
        popTime12->setObjectName("popTime12");
        popTime12->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime12->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime12);

        popTime9 = new QLabel(widget1);
        popTime9->setObjectName("popTime9");
        popTime9->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        popTime9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(popTime9);

        tempCurve = new QLabel(widget_LayoutButtom);
        tempCurve->setObjectName("tempCurve");
        tempCurve->setGeometry(QRect(0, 30, 1181, 221));
        tempCurve->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        widget2 = new QWidget(widget_LayoutButtom);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 270, 1171, 31));
        widget2->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        hourTime1 = new QLabel(widget2);
        hourTime1->setObjectName("hourTime1");
        hourTime1->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime1);

        hourTime2 = new QLabel(widget2);
        hourTime2->setObjectName("hourTime2");
        hourTime2->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime2);

        hourTime3 = new QLabel(widget2);
        hourTime3->setObjectName("hourTime3");
        hourTime3->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime3);

        hourTime4 = new QLabel(widget2);
        hourTime4->setObjectName("hourTime4");
        hourTime4->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime4);

        hourTime5 = new QLabel(widget2);
        hourTime5->setObjectName("hourTime5");
        hourTime5->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime5);

        hourTime6 = new QLabel(widget2);
        hourTime6->setObjectName("hourTime6");
        hourTime6->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime6);

        hourTime7 = new QLabel(widget2);
        hourTime7->setObjectName("hourTime7");
        hourTime7->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime7);

        hourTime8 = new QLabel(widget2);
        hourTime8->setObjectName("hourTime8");
        hourTime8->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime8->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime8);

        hourTime9 = new QLabel(widget2);
        hourTime9->setObjectName("hourTime9");
        hourTime9->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime9);

        hourTime10 = new QLabel(widget2);
        hourTime10->setObjectName("hourTime10");
        hourTime10->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime10->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime10);

        hourTime11 = new QLabel(widget2);
        hourTime11->setObjectName("hourTime11");
        hourTime11->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime11->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime11);

        hourTime12 = new QLabel(widget2);
        hourTime12->setObjectName("hourTime12");
        hourTime12->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        hourTime12->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(hourTime12);

        label_2 = new QLabel(widget_LayoutButtom);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 255, 21, 21));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"image: url(:/res/shuidi.png);"));
        label_4 = new QLabel(widget_LayoutButtom);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 280, 20, 20));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"image: url(:/res/weather.png);"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 410, 1171, 141));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 2);\n"
"border-radius: 15px;"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 10, 311, 121));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        ldate1 = new QLabel(widget_4);
        ldate1->setObjectName("ldate1");
        ldate1->setGeometry(QRect(40, 10, 71, 21));
        ldate1->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        IconDay1 = new QLabel(widget_4);
        IconDay1->setObjectName("IconDay1");
        IconDay1->setGeometry(QRect(20, 30, 71, 71));
        IconDay1->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax1 = new QLabel(widget_4);
        tempMax1->setObjectName("tempMax1");
        tempMax1->setGeometry(QRect(100, 40, 40, 12));
        tempMax1->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin1 = new QLabel(widget_4);
        tempMin1->setObjectName("tempMin1");
        tempMin1->setGeometry(QRect(100, 80, 40, 12));
        tempMin1->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        cloud = new QLabel(widget_4);
        cloud->setObjectName("cloud");
        cloud->setGeometry(QRect(240, 80, 41, 20));
        cloud->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        yunduo = new QLabel(widget_4);
        yunduo->setObjectName("yunduo");
        yunduo->setGeometry(QRect(190, 80, 21, 21));
        yunduo->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"image: url(:/res/yunduo.png);\n"
""));
        xiayulabel = new QLabel(widget_4);
        xiayulabel->setObjectName("xiayulabel");
        xiayulabel->setGeometry(QRect(170, 40, 91, 20));
        xiayulabel->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        yunduo_2 = new QLabel(widget_4);
        yunduo_2->setObjectName("yunduo_2");
        yunduo_2->setGeometry(QRect(150, 40, 21, 20));
        yunduo_2->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
"image: url(:/res/xiayu.png);\n"
""));
        cloudLabel = new QLabel(widget_4);
        cloudLabel->setObjectName("cloudLabel");
        cloudLabel->setGeometry(QRect(210, 80, 31, 20));
        cloudLabel->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        xiayu = new QLabel(widget_4);
        xiayu->setObjectName("xiayu");
        xiayu->setGeometry(QRect(260, 40, 51, 20));
        xiayu->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(330, 10, 131, 121));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        date2 = new QLabel(widget_5);
        date2->setObjectName("date2");
        date2->setGeometry(QRect(20, 10, 41, 21));
        date2->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: bottom;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);"));
        week2 = new QLabel(widget_5);
        week2->setObjectName("week2");
        week2->setGeometry(QRect(50, 10, 51, 21));
        week2->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        IconDay2 = new QLabel(widget_5);
        IconDay2->setObjectName("IconDay2");
        IconDay2->setGeometry(QRect(10, 30, 71, 71));
        IconDay2->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax2 = new QLabel(widget_5);
        tempMax2->setObjectName("tempMax2");
        tempMax2->setGeometry(QRect(90, 40, 40, 12));
        tempMax2->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin2 = new QLabel(widget_5);
        tempMin2->setObjectName("tempMin2");
        tempMin2->setGeometry(QRect(90, 80, 40, 12));
        tempMin2->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(470, 10, 131, 121));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        date3 = new QLabel(widget_6);
        date3->setObjectName("date3");
        date3->setGeometry(QRect(20, 10, 41, 21));
        date3->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: bottom;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);"));
        week3 = new QLabel(widget_6);
        week3->setObjectName("week3");
        week3->setGeometry(QRect(50, 10, 51, 21));
        week3->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        IconDay3 = new QLabel(widget_6);
        IconDay3->setObjectName("IconDay3");
        IconDay3->setGeometry(QRect(10, 30, 71, 71));
        IconDay3->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax3 = new QLabel(widget_6);
        tempMax3->setObjectName("tempMax3");
        tempMax3->setGeometry(QRect(90, 40, 40, 12));
        tempMax3->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin3 = new QLabel(widget_6);
        tempMin3->setObjectName("tempMin3");
        tempMin3->setGeometry(QRect(90, 80, 40, 12));
        tempMin3->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(610, 10, 131, 121));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        date4 = new QLabel(widget_7);
        date4->setObjectName("date4");
        date4->setGeometry(QRect(20, 10, 41, 21));
        date4->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: bottom;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);"));
        week4 = new QLabel(widget_7);
        week4->setObjectName("week4");
        week4->setGeometry(QRect(50, 10, 51, 21));
        week4->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        IconDay4 = new QLabel(widget_7);
        IconDay4->setObjectName("IconDay4");
        IconDay4->setGeometry(QRect(10, 30, 71, 71));
        IconDay4->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax4 = new QLabel(widget_7);
        tempMax4->setObjectName("tempMax4");
        tempMax4->setGeometry(QRect(90, 40, 40, 12));
        tempMax4->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin4 = new QLabel(widget_7);
        tempMin4->setObjectName("tempMin4");
        tempMin4->setGeometry(QRect(90, 80, 40, 12));
        tempMin4->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(750, 10, 131, 121));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        week5 = new QLabel(widget_8);
        week5->setObjectName("week5");
        week5->setGeometry(QRect(50, 10, 61, 21));
        week5->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        date5 = new QLabel(widget_8);
        date5->setObjectName("date5");
        date5->setGeometry(QRect(20, 10, 51, 21));
        date5->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: bottom;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);"));
        IconDay5 = new QLabel(widget_8);
        IconDay5->setObjectName("IconDay5");
        IconDay5->setGeometry(QRect(10, 30, 71, 71));
        IconDay5->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax5 = new QLabel(widget_8);
        tempMax5->setObjectName("tempMax5");
        tempMax5->setGeometry(QRect(90, 40, 40, 12));
        tempMax5->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin5 = new QLabel(widget_8);
        tempMin5->setObjectName("tempMin5");
        tempMin5->setGeometry(QRect(90, 80, 40, 12));
        tempMin5->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(890, 10, 131, 121));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        date6 = new QLabel(widget_9);
        date6->setObjectName("date6");
        date6->setGeometry(QRect(20, 10, 41, 21));
        date6->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: bottom;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);"));
        week6 = new QLabel(widget_9);
        week6->setObjectName("week6");
        week6->setGeometry(QRect(50, 10, 51, 21));
        week6->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(196, 196, 196);\n"
""));
        IconDay6 = new QLabel(widget_9);
        IconDay6->setObjectName("IconDay6");
        IconDay6->setGeometry(QRect(10, 30, 71, 71));
        IconDay6->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax6 = new QLabel(widget_9);
        tempMax6->setObjectName("tempMax6");
        tempMax6->setGeometry(QRect(90, 40, 40, 12));
        tempMax6->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin6 = new QLabel(widget_9);
        tempMin6->setObjectName("tempMin6");
        tempMin6->setGeometry(QRect(90, 80, 40, 12));
        tempMin6->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(1029, 10, 131, 121));
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        date7 = new QLabel(widget_10);
        date7->setObjectName("date7");
        date7->setGeometry(QRect(20, 10, 41, 21));
        date7->setStyleSheet(QString::fromUtf8("font: 25 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: bottom;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);"));
        week7 = new QLabel(widget_10);
        week7->setObjectName("week7");
        week7->setGeometry(QRect(50, 10, 51, 21));
        week7->setStyleSheet(QString::fromUtf8("font: 25 17px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        IconDay7 = new QLabel(widget_10);
        IconDay7->setObjectName("IconDay7");
        IconDay7->setGeometry(QRect(10, 30, 71, 71));
        IconDay7->setStyleSheet(QString::fromUtf8("font: 25 11px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        tempMax7 = new QLabel(widget_10);
        tempMax7->setObjectName("tempMax7");
        tempMax7->setGeometry(QRect(90, 40, 40, 12));
        tempMax7->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        tempMin7 = new QLabel(widget_10);
        tempMin7->setObjectName("tempMin7");
        tempMin7->setGeometry(QRect(90, 80, 40, 12));
        tempMin7->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        widget_layoutTop = new QWidget(widget);
        widget_layoutTop->setObjectName("widget_layoutTop");
        widget_layoutTop->setGeometry(QRect(0, 0, 1201, 71));
        widget_layoutTop->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 10);"));
        searchEdit = new QLineEdit(widget_layoutTop);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(20, 9, 191, 41));
        searchEdit->setStyleSheet(QString::fromUtf8("border: 1px solid #8f8f91; border-radius: 15px; padding: 0 2px; \n"
"color: white;\n"
"\n"
"\n"
"\n"
""));
        label_32 = new QLabel(widget_layoutTop);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(940, 20, 51, 41));
        label_32->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        date1 = new QLabel(widget_layoutTop);
        date1->setObjectName("date1");
        date1->setGeometry(QRect(990, 20, 201, 41));
        date1->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"	color: rgb(255, 255, 255);\n"
""));
        searchbtn = new QPushButton(widget_layoutTop);
        searchbtn->setObjectName("searchbtn");
        searchbtn->setGeometry(QRect(180, 20, 21, 21));
        searchbtn->setStyleSheet(QString::fromUtf8("font: 25 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"image: url(:/res/fzIcon/sousuo4.png);\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgb(196, 196, 196);\n"
""));
        label = new QLabel(widget_layoutTop);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 351, 16));
        label->setStyleSheet(QString::fromUtf8("font: 25 9px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-align: center;\n"
"border-radius:4px;\n"
"background-color: rgb(255, 255, 255,0);\n"
"color: rgba(136, 136, 136, 100);\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        icon->setText(QString());
        todayWendu->setText(QString());
        cityLabel->setText(QString());
        Ganmao->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251\345\244\247\351\203\250\345\210\206\345\234\260\345\214\272\345\244\251\346\260\224\346\231\264\346\234\227\343\200\202 \346\234\200\351\253\230\346\260\224\346\270\25134\302\260\343\200\202", nullptr));
        label_3->setText(QString());
        text->setText(QString());
        feelsLikeLable->setText(QCoreApplication::translate("MainWindow", "\344\275\223\346\204\237\346\270\251\345\272\246\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\350\203\275\350\247\201\345\272\246", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\260\224\345\216\213", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\351\234\262\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        dew->setText(QCoreApplication::translate("MainWindow", "23", nullptr));
        pressure->setText(QCoreApplication::translate("MainWindow", "970 hPa", nullptr));
        labelvis->setText(QCoreApplication::translate("MainWindow", "14.6\345\205\254\351\207\214", nullptr));
        humidity->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
#if QT_CONFIG(whatsthis)
        windDir->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        windDir->setText(QCoreApplication::translate("MainWindow", "\345\215\227\351\243\216 2\347\272\247", nullptr));
        quality->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        qualitylevel->setText(QString());
        feelsLike->setText(QString());
        cityLabel_2->setText(QCoreApplication::translate("MainWindow", "\346\227\245\345\207\272\346\227\245\350\220\275\345\222\214\346\234\210\347\233\270", nullptr));
        feelsLikeLable_2->setText(QCoreApplication::translate("MainWindow", "\347\264\253\345\244\226\347\272\277\346\214\207\346\225\260", nullptr));
        ziwaixianImage->setText(QString());
        yuexiangIcon->setText(QString());
        feelsLikeLable_3->setText(QCoreApplication::translate("MainWindow", "\346\234\210\347\233\270", nullptr));
        ziwaixian->setText(QCoreApplication::translate("MainWindow", "\347\264\253\345\244\226\347\272\277\346\214\207\346\225\260", nullptr));
        yuexiang->setText(QCoreApplication::translate("MainWindow", "\346\234\210\347\233\270", nullptr));
        yunduo_6->setText(QString());
        feelsLikeLable_5->setText(QCoreApplication::translate("MainWindow", "\346\227\245\350\220\275", nullptr));
        yunduo_7->setText(QString());
        feelsLikeLable_6->setText(QCoreApplication::translate("MainWindow", "\346\227\245\345\207\272", nullptr));
        sunrise->setText(QString());
        sunset->setText(QString());
        suntime->setText(QString());
        suntime_2->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\345\267\256\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "24\345\260\217\346\227\266\351\242\204\346\212\245", nullptr));
        popTime1->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime2->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime3->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime4->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime5->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime6->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime7->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime8->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime10->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime11->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime12->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        popTime9->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        tempCurve->setText(QString());
        hourTime1->setText(QString());
        hourTime2->setText(QString());
        hourTime3->setText(QString());
        hourTime4->setText(QString());
        hourTime5->setText(QString());
        hourTime6->setText(QString());
        hourTime7->setText(QString());
        hourTime8->setText(QString());
        hourTime9->setText(QString());
        hourTime10->setText(QString());
        hourTime11->setText(QString());
        hourTime12->setText(QString());
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "l", nullptr));
        ldate1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        IconDay1->setText(QString());
        tempMax1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        cloud->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yunduo->setText(QString());
        xiayulabel->setText(QCoreApplication::translate("MainWindow", "\350\277\207\345\216\2731\345\260\217\346\227\266\351\231\215\346\260\264\351\207\217\357\274\232", nullptr));
        yunduo_2->setText(QString());
        cloudLabel->setText(QCoreApplication::translate("MainWindow", "\344\272\221\351\207\217:", nullptr));
        xiayu->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        date2->setText(QCoreApplication::translate("MainWindow", "111111", nullptr));
        week2->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        IconDay2->setText(QString());
        tempMax2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        date3->setText(QCoreApplication::translate("MainWindow", "111111", nullptr));
        week3->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        IconDay3->setText(QString());
        tempMax3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        date4->setText(QCoreApplication::translate("MainWindow", "111111", nullptr));
        week4->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        IconDay4->setText(QString());
        tempMax4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        week5->setText(QCoreApplication::translate("MainWindow", "111111", nullptr));
        date5->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        IconDay5->setText(QString());
        tempMax5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        date6->setText(QCoreApplication::translate("MainWindow", "111111", nullptr));
        week6->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        IconDay6->setText(QString());
        tempMax6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        date7->setText(QCoreApplication::translate("MainWindow", "111111", nullptr));
        week7->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        IconDay7->setText(QString());
        tempMax7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tempMin7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        searchEdit->setText(QString());
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\344\275\215\347\275\256", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\226\260\346\227\266\351\227\264:", nullptr));
        date1->setText(QString());
        searchbtn->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\217\220\347\244\272\357\274\232\350\257\267\350\276\223\345\205\245\342\200\234\345\234\260\345\214\272\347\256\200\347\247\260\342\200\235\346\210\226\342\200\234\347\234\201\344\273\275\347\256\200\347\247\260\357\274\214\345\234\260\345\214\272\347\256\200\347\247\260\342\200\235,\345\246\202\342\200\234\346\262\231\345\235\252\345\235\235\342\200\235\346\210\226\342\200\234\351\207\215\345\272\206\357\274\214\346\262\231\345\235\252\345\235\235\342\200\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
