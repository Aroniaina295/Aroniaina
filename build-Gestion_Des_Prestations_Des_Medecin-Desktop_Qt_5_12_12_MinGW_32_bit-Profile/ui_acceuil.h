/********************************************************************************
** Form generated from reading UI file 'acceuil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEUIL_H
#define UI_ACCEUIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acceuil
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_pic;
    QLabel *label;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QTableWidget *tableWidget_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_test;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Acceuil)
    {
        if (Acceuil->objectName().isEmpty())
            Acceuil->setObjectName(QString::fromUtf8("Acceuil"));
        Acceuil->resize(800, 691);
        centralwidget = new QWidget(Acceuil);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 831, 681));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color:#673C55;"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 80, 341, 481));
        groupBox->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 321, 441));
        tableView->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(410, 210, 291, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:#5E64A6;\n"
"color:white;\n"
"font: bold i large \"TimesbNew Roman\";\n"
""));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:rgb(255, 255, 94);\n"
"\n"
"font: bold i large \"TimesbNew Roman\";\n"
""));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#5E64A6;\n"
"color:white;\n"
"\n"
"font: bold i large \"TimesbNew Roman\";\n"
""));

        verticalLayout->addWidget(pushButton);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("color:black;\n"
"\n"
"font: bold i large \"TimesbNew Roman\";\n"
"\n"
"background-color:rgb(255, 255, 94);"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color:#5E64A6;\n"
"\n"
"font: bold i large \"TimesbNew Roman\";\n"
"\n"
"color:white;"));

        verticalLayout->addWidget(pushButton_11);

        label_pic = new QLabel(tab);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(440, 40, 271, 151));
        label_pic->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 311, 21));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:15px;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 20, 781, 271));
        tableWidget_2 = new QTableWidget(groupBox_2);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 20, 761, 231));
        tableWidget_2->setColumnCount(3);
        horizontalLayoutWidget_2 = new QWidget(tab_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 320, 771, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 40, 781, 271));
        tableWidget_3 = new QTableWidget(groupBox_3);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(10, 20, 761, 231));
        tableWidget_3->setColumnCount(5);
        horizontalLayoutWidget_3 = new QWidget(tab_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(50, 320, 771, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_3->addWidget(pushButton_9);

        label_test = new QLabel(tab_3);
        label_test->setObjectName(QString::fromUtf8("label_test"));
        label_test->setGeometry(QRect(240, 10, 47, 13));
        tabWidget->addTab(tab_3, QString());
        Acceuil->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Acceuil);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Acceuil->setStatusBar(statusbar);

        retranslateUi(Acceuil);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Acceuil);
    } // setupUi

    void retranslateUi(QMainWindow *Acceuil)
    {
        Acceuil->setWindowTitle(QApplication::translate("Acceuil", "Acceuil", nullptr));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("Acceuil", "<html><head/><body><p><span style=\" text-decoration: underline;\">Medecin</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("Acceuil", "Liste des medecins", nullptr));
        pushButton_3->setText(QApplication::translate("Acceuil", "Ajouter", nullptr));
        pushButton_2->setText(QApplication::translate("Acceuil", "Modifier", nullptr));
        pushButton->setText(QApplication::translate("Acceuil", "Supprimer", nullptr));
        pushButton_10->setText(QApplication::translate("Acceuil", "Recherche des Medecins", nullptr));
        pushButton_11->setText(QApplication::translate("Acceuil", "Mise \303\240 jour Liste", nullptr));
        label_pic->setText(QString());
        label->setText(QApplication::translate("Acceuil", "GESTION DES PRESTATIONS DES MEDECINS", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Acceuil", "medecin", nullptr));
        groupBox_2->setTitle(QApplication::translate("Acceuil", "Liste des patients", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Acceuil", "N\302\260patient", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Acceuil", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Acceuil", "Adresse", nullptr));
        pushButton_4->setText(QApplication::translate("Acceuil", "Ajouter", nullptr));
        pushButton_5->setText(QApplication::translate("Acceuil", "Modifier", nullptr));
        pushButton_6->setText(QApplication::translate("Acceuil", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Acceuil", "patient", nullptr));
        groupBox_3->setTitle(QApplication::translate("Acceuil", "Traitement", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Acceuil", "n\302\260traitement", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Acceuil", "n\302\260medecin", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Acceuil", "adresse", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("Acceuil", "nbjour", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("Acceuil", "date de consultation", nullptr));
        pushButton_7->setText(QApplication::translate("Acceuil", "OK", nullptr));
        pushButton_8->setText(QApplication::translate("Acceuil", "Modifier", nullptr));
        pushButton_9->setText(QApplication::translate("Acceuil", "Supprimer", nullptr));
        label_test->setText(QApplication::translate("Acceuil", "zvhdvsd", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Acceuil", "traitement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acceuil: public Ui_Acceuil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEUIL_H
