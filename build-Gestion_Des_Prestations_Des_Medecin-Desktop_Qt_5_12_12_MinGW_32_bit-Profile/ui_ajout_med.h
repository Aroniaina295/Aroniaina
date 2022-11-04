/********************************************************************************
** Form generated from reading UI file 'ajout_med.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUT_MED_H
#define UI_AJOUT_MED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajout_med
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Nummed;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Taux;
    QLabel *label_ajoutmed;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Nommed;

    void setupUi(QDialog *ajout_med)
    {
        if (ajout_med->objectName().isEmpty())
            ajout_med->setObjectName(QString::fromUtf8("ajout_med"));
        ajout_med->resize(400, 396);
        ajout_med->setStyleSheet(QString::fromUtf8("background-color: #703F50;"));
        horizontalLayoutWidget = new QWidget(ajout_med);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 351, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout->addWidget(label);

        lineEdit_Nummed = new QLineEdit(horizontalLayoutWidget);
        lineEdit_Nummed->setObjectName(QString::fromUtf8("lineEdit_Nummed"));
        lineEdit_Nummed->setStyleSheet(QString::fromUtf8("background-color: WHITE;\n"
"placehoder:MED;\n"
"color:black;"));

        horizontalLayout->addWidget(lineEdit_Nummed);

        horizontalLayoutWidget_4 = new QWidget(ajout_med);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(40, 270, 321, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #5864A4;\n"
"color:white;"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:white;background-color: #5864A4;"));

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalLayoutWidget_3 = new QWidget(ajout_med);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 170, 351, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Taux = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_Taux->setObjectName(QString::fromUtf8("lineEdit_Taux"));
        lineEdit_Taux->setStyleSheet(QString::fromUtf8("background-color: WHITE;"));

        horizontalLayout_3->addWidget(lineEdit_Taux);

        label_ajoutmed = new QLabel(ajout_med);
        label_ajoutmed->setObjectName(QString::fromUtf8("label_ajoutmed"));
        label_ajoutmed->setGeometry(QRect(120, 360, 161, 31));
        label_ajoutmed->setStyleSheet(QString::fromUtf8("color:white;"));
        horizontalLayoutWidget_2 = new QWidget(ajout_med);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 100, 351, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Nommed = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_Nommed->setObjectName(QString::fromUtf8("lineEdit_Nommed"));
        lineEdit_Nommed->setStyleSheet(QString::fromUtf8("background-color: WHITE;"));

        horizontalLayout_2->addWidget(lineEdit_Nommed);


        retranslateUi(ajout_med);

        QMetaObject::connectSlotsByName(ajout_med);
    } // setupUi

    void retranslateUi(QDialog *ajout_med)
    {
        ajout_med->setWindowTitle(QApplication::translate("ajout_med", "Dialog", nullptr));
        label->setText(QApplication::translate("ajout_med", "N\302\260medecin       ", nullptr));
        lineEdit_Nummed->setPlaceholderText(QApplication::translate("ajout_med", "MED", nullptr));
        pushButton->setText(QApplication::translate("ajout_med", "Ajouter", nullptr));
        pushButton_2->setText(QApplication::translate("ajout_med", "Annuler", nullptr));
        label_3->setText(QApplication::translate("ajout_med", "Taux journalier", nullptr));
        label_ajoutmed->setText(QApplication::translate("ajout_med", "tftfu", nullptr));
        label_2->setText(QApplication::translate("ajout_med", "Nom                 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajout_med: public Ui_ajout_med {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUT_MED_H
