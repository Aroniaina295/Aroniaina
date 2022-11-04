/********************************************************************************
** Form generated from reading UI file 'sup_med.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUP_MED_H
#define UI_SUP_MED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sup_med
{
public:
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_nummed;

    void setupUi(QDialog *sup_med)
    {
        if (sup_med->objectName().isEmpty())
            sup_med->setObjectName(QString::fromUtf8("sup_med"));
        sup_med->resize(400, 92);
        sup_med->setStyleSheet(QString::fromUtf8("background-color: #703F50;"));
        pushButton_2 = new QPushButton(sup_med);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 20, 131, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #5864A4;\n"
"color:white;"));
        lineEdit = new QLineEdit(sup_med);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 161, 22));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        label_nummed = new QLabel(sup_med);
        label_nummed->setObjectName(QString::fromUtf8("label_nummed"));
        label_nummed->setGeometry(QRect(10, 20, 61, 16));
        label_nummed->setStyleSheet(QString::fromUtf8("color:white;"));

        retranslateUi(sup_med);

        QMetaObject::connectSlotsByName(sup_med);
    } // setupUi

    void retranslateUi(QDialog *sup_med)
    {
        sup_med->setWindowTitle(QApplication::translate("sup_med", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("sup_med", "Supprimer", nullptr));
        label_nummed->setText(QApplication::translate("sup_med", "N\302\260medecin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sup_med: public Ui_sup_med {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUP_MED_H
