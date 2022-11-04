/********************************************************************************
** Form generated from reading UI file 'recherchemed.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHERCHEMED_H
#define UI_RECHERCHEMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recherchemed
{
public:
    QTableView *tableView;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rdoNummed;
    QRadioButton *rdoNom;
    QRadioButton *rdoTaux;
    QPushButton *btnFind;
    QLineEdit *txtValue;
    QLabel *lblfindmed;

    void setupUi(QDialog *recherchemed)
    {
        if (recherchemed->objectName().isEmpty())
            recherchemed->setObjectName(QString::fromUtf8("recherchemed"));
        recherchemed->resize(390, 300);
        recherchemed->setStyleSheet(QString::fromUtf8("background-color: #703F50;"));
        tableView = new QTableView(recherchemed);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 110, 321, 141));
        tableView->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        groupBox = new QGroupBox(recherchemed);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 321, 41));
        groupBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:rgb(255, 255, 94);\n"
"\n"
"font: bold i large \"TimesbNew Roman\";"));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 321, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rdoNummed = new QRadioButton(horizontalLayoutWidget);
        rdoNummed->setObjectName(QString::fromUtf8("rdoNummed"));

        horizontalLayout->addWidget(rdoNummed);

        rdoNom = new QRadioButton(horizontalLayoutWidget);
        rdoNom->setObjectName(QString::fromUtf8("rdoNom"));

        horizontalLayout->addWidget(rdoNom);

        rdoTaux = new QRadioButton(horizontalLayoutWidget);
        rdoTaux->setObjectName(QString::fromUtf8("rdoTaux"));

        horizontalLayout->addWidget(rdoTaux);

        btnFind = new QPushButton(recherchemed);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setGeometry(QRect(280, 30, 75, 23));
        btnFind->setStyleSheet(QString::fromUtf8("background-color: #5864A4;\n"
"color:white;"));
        txtValue = new QLineEdit(recherchemed);
        txtValue->setObjectName(QString::fromUtf8("txtValue"));
        txtValue->setGeometry(QRect(30, 30, 201, 20));
        txtValue->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        lblfindmed = new QLabel(recherchemed);
        lblfindmed->setObjectName(QString::fromUtf8("lblfindmed"));
        lblfindmed->setGeometry(QRect(160, 270, 71, 16));

        retranslateUi(recherchemed);

        QMetaObject::connectSlotsByName(recherchemed);
    } // setupUi

    void retranslateUi(QDialog *recherchemed)
    {
        recherchemed->setWindowTitle(QApplication::translate("recherchemed", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("recherchemed", "Filtre", nullptr));
        rdoNummed->setText(QApplication::translate("recherchemed", "Num_med", nullptr));
        rdoNom->setText(QApplication::translate("recherchemed", "Nom", nullptr));
        rdoTaux->setText(QApplication::translate("recherchemed", "Taux_journalier", nullptr));
        btnFind->setText(QApplication::translate("recherchemed", "Recherche", nullptr));
        lblfindmed->setText(QApplication::translate("recherchemed", "erhgteh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recherchemed: public Ui_recherchemed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHERCHEMED_H
