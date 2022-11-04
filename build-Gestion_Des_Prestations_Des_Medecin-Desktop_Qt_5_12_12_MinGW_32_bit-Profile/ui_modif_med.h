/********************************************************************************
** Form generated from reading UI file 'modif_med.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIF_MED_H
#define UI_MODIF_MED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modif_med
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblNommed;
    QLabel *lblTaux;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtNommed;
    QLineEdit *txtTaux;
    QLabel *label_nummed;
    QLabel *label_connect;
    QLineEdit *txtnummed;
    QLabel *lblnummede;

    void setupUi(QDialog *modif_med)
    {
        if (modif_med->objectName().isEmpty())
            modif_med->setObjectName(QString::fromUtf8("modif_med"));
        modif_med->resize(400, 300);
        modif_med->setStyleSheet(QString::fromUtf8("background-color: #703F50;"));
        lineEdit = new QLineEdit(modif_med);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 161, 22));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: WHITE;"));
        label_2 = new QLabel(modif_med);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 440, 47, 13));
        pushButton = new QPushButton(modif_med);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 240, 101, 21));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #5E64A6;\n"
"color:white;"));
        pushButton_2 = new QPushButton(modif_med);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 20, 131, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #5E64A6;\n"
"color:white;"));
        verticalLayoutWidget = new QWidget(modif_med);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 90, 151, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblNommed = new QLabel(verticalLayoutWidget);
        lblNommed->setObjectName(QString::fromUtf8("lblNommed"));
        QFont font;
        font.setPointSize(10);
        lblNommed->setFont(font);
        lblNommed->setStyleSheet(QString::fromUtf8("COLOR:white;"));

        verticalLayout->addWidget(lblNommed);

        lblTaux = new QLabel(verticalLayoutWidget);
        lblTaux->setObjectName(QString::fromUtf8("lblTaux"));
        lblTaux->setFont(font);
        lblTaux->setStyleSheet(QString::fromUtf8("COLOR:white;"));

        verticalLayout->addWidget(lblTaux);

        verticalLayoutWidget_2 = new QWidget(modif_med);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(230, 80, 160, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        txtNommed = new QLineEdit(verticalLayoutWidget_2);
        txtNommed->setObjectName(QString::fromUtf8("txtNommed"));
        txtNommed->setFont(font);
        txtNommed->setStyleSheet(QString::fromUtf8("background-color: WHITE;"));

        verticalLayout_2->addWidget(txtNommed);

        txtTaux = new QLineEdit(verticalLayoutWidget_2);
        txtTaux->setObjectName(QString::fromUtf8("txtTaux"));
        txtTaux->setFont(font);
        txtTaux->setStyleSheet(QString::fromUtf8("background-color: WHITE;"));

        verticalLayout_2->addWidget(txtTaux);

        label_nummed = new QLabel(modif_med);
        label_nummed->setObjectName(QString::fromUtf8("label_nummed"));
        label_nummed->setGeometry(QRect(10, 20, 61, 16));
        label_nummed->setStyleSheet(QString::fromUtf8("COLOR:white;"));
        label_connect = new QLabel(modif_med);
        label_connect->setObjectName(QString::fromUtf8("label_connect"));
        label_connect->setGeometry(QRect(190, 270, 111, 20));
        txtnummed = new QLineEdit(modif_med);
        txtnummed->setObjectName(QString::fromUtf8("txtnummed"));
        txtnummed->setEnabled(false);
        txtnummed->setGeometry(QRect(230, 60, 161, 20));
        txtnummed->setFont(font);
        txtnummed->setAutoFillBackground(false);
        txtnummed->setStyleSheet(QString::fromUtf8("background-color: WHITE;"));
        lblnummede = new QLabel(modif_med);
        lblnummede->setObjectName(QString::fromUtf8("lblnummede"));
        lblnummede->setGeometry(QRect(50, 60, 81, 16));
        lblnummede->setFont(font);
        lblnummede->setStyleSheet(QString::fromUtf8("COLOR:white;"));

        retranslateUi(modif_med);

        QMetaObject::connectSlotsByName(modif_med);
    } // setupUi

    void retranslateUi(QDialog *modif_med)
    {
        modif_med->setWindowTitle(QApplication::translate("modif_med", "Dialog", nullptr));
        label_2->setText(QApplication::translate("modif_med", "hgqe", nullptr));
        pushButton->setText(QApplication::translate("modif_med", "Modifier", nullptr));
        pushButton_2->setText(QApplication::translate("modif_med", "Recherche", nullptr));
        lblNommed->setText(QApplication::translate("modif_med", "Nom", nullptr));
        lblTaux->setText(QApplication::translate("modif_med", "Taux_journalier", nullptr));
        label_nummed->setText(QApplication::translate("modif_med", "N\302\260medecin", nullptr));
        label_connect->setText(QApplication::translate("modif_med", "FZFGERG", nullptr));
        lblnummede->setText(QApplication::translate("modif_med", "N\302\260medecin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modif_med: public Ui_modif_med {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIF_MED_H
