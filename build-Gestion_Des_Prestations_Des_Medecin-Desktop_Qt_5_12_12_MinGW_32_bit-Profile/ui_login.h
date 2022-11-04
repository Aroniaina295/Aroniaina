/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_user;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelpass;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButton;
    QLabel *login;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 427);
        frame = new QFrame(Login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 60, 311, 301));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background: white;\n"
"border-radius: 25px;\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 60, 211, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:black;"));

        horizontalLayout->addWidget(label_2);

        lineEdit_user = new QLineEdit(horizontalLayoutWidget);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
""));

        horizontalLayout->addWidget(lineEdit_user);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 160, 211, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelpass = new QLabel(horizontalLayoutWidget_2);
        labelpass->setObjectName(QString::fromUtf8("labelpass"));
        labelpass->setStyleSheet(QString::fromUtf8("color:black;"));

        horizontalLayout_2->addWidget(labelpass);

        lineEdit_pass = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_pass);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 260, 80, 21));
        login = new QLabel(Login);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(190, 380, 47, 13));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Login", "Usernam   ", nullptr));
        labelpass->setText(QApplication::translate("Login", "Password   ", nullptr));
        pushButton->setText(QApplication::translate("Login", "PushButton", nullptr));
        login->setText(QApplication::translate("Login", "TexfktLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
