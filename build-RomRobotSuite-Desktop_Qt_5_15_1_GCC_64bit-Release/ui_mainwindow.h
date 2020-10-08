/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QFrame *loginFrame;
    QLabel *labelLoginHere;
    QPushButton *loginBtn;
    QLineEdit *lineEditUserName;
    QLineEdit *lineEditPassword;
    QLabel *labelUserName;
    QLabel *labelPassword;
    QPushButton *pushButton;
    QPushButton *adminbtn;
    QPushButton *clientbtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 525);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(700, 525));
        MainWindow->setMaximumSize(QSize(700, 525));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setItalic(true);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-image: url(:/images/mdyblur.png) 0 0 0 0 stretch stretch;\n"
"}\n"
"\n"
"*{\n"
"font-family: Umpush;\n"
"font-size: 14px;\n"
"color:blue;\n"
"}\n"
"\n"
"#loginFrame{\n"
"background:rgba(0,0,0,0.6);\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#pushButton{\n"
"border-radius: 0px;\n"
"background: transparent;\n"
"}\n"
"\n"
"#loginBtn{\n"
"border-radius:15px;\n"
"color: white;\n"
"background: rgb(27, 124, 231);\n"
"Font-size: 14px;\n"
"}\n"
"\n"
"#loginBtn:hover{\n"
"border-radius:15px;\n"
"color: #333;\n"
"background:rgb(155, 194, 251);\n"
"font-weight:bold;\n"
"}\n"
"\n"
"#lineEditPassword,#lineEditUserName {\n"
"background: transparent;\n"
"border: none;\n"
"color: #717072;\n"
"border-bottom: 1px solid #717072;\n"
"Font-size: 14px;\n"
"}\n"
"#labelUserName{\n"
"Font-size: 14px;\n"
"color: white;\n"
"background: transparent;\n"
"}\n"
"#labelPassword{\n"
"Font-size: 14px;\n"
"color: white;\n"
"background: transparent;\n"
"}\n"
"\n"
"#labelLoginHere{\n"
"Font-size: 17px;\n"
"color: white"
                        ";\n"
"background: transparent;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loginFrame = new QFrame(centralwidget);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        loginFrame->setGeometry(QRect(230, 120, 281, 321));
        loginFrame->setStyleSheet(QString::fromUtf8(""));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        labelLoginHere = new QLabel(loginFrame);
        labelLoginHere->setObjectName(QString::fromUtf8("labelLoginHere"));
        labelLoginHere->setGeometry(QRect(70, 40, 151, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Umpush"));
        font1.setBold(true);
        font1.setWeight(75);
        labelLoginHere->setFont(font1);
        labelLoginHere->setStyleSheet(QString::fromUtf8(""));
        loginBtn = new QPushButton(loginFrame);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(31, 273, 221, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Umpush"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        loginBtn->setFont(font2);
        loginBtn->setCursor(QCursor(Qt::PointingHandCursor));
        lineEditUserName = new QLineEdit(loginFrame);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));
        lineEditUserName->setGeometry(QRect(31, 140, 221, 31));
        lineEditUserName->setCursor(QCursor(Qt::PointingHandCursor));
        lineEditUserName->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEditPassword = new QLineEdit(loginFrame);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(31, 220, 221, 31));
        lineEditPassword->setCursor(QCursor(Qt::PointingHandCursor));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        labelUserName = new QLabel(loginFrame);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));
        labelUserName->setGeometry(QRect(31, 120, 65, 28));
        labelUserName->setStyleSheet(QString::fromUtf8(""));
        labelPassword = new QLabel(loginFrame);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(30, 190, 62, 28));
        labelPassword->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 60, 101, 101));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border-radius: 60px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/primary_KMx_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(100, 100));
        adminbtn = new QPushButton(centralwidget);
        adminbtn->setObjectName(QString::fromUtf8("adminbtn"));
        adminbtn->setGeometry(QRect(40, 210, 89, 25));
        clientbtn = new QPushButton(centralwidget);
        clientbtn->setObjectName(QString::fromUtf8("clientbtn"));
        clientbtn->setGeometry(QRect(40, 270, 89, 25));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ROM ROBOTICS", nullptr));
        labelLoginHere->setText(QCoreApplication::translate("MainWindow", "ROM ROBOTICS", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEditUserName->setText(QString());
        lineEditUserName->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        labelUserName->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QString());
        adminbtn->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        clientbtn->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
