/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *info_tab;
    QWidget *demand_Tab;
    QPushButton *demandSubmit_btn;
    QPushButton *demandRefresh_btn;
    QTableView *tableView;
    QPushButton *delete_btn;
    QWidget *buy_Tab;
    QPushButton *buyRefresh_btn;
    QTableView *tableView_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 554);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        info_tab = new QTabWidget(centralWidget);
        info_tab->setObjectName(QStringLiteral("info_tab"));
        info_tab->setGeometry(QRect(10, 10, 651, 501));
        info_tab->setTabPosition(QTabWidget::North);
        info_tab->setTabShape(QTabWidget::Triangular);
        demand_Tab = new QWidget();
        demand_Tab->setObjectName(QStringLiteral("demand_Tab"));
        demandSubmit_btn = new QPushButton(demand_Tab);
        demandSubmit_btn->setObjectName(QStringLiteral("demandSubmit_btn"));
        demandSubmit_btn->setGeometry(QRect(530, 430, 75, 23));
        demandRefresh_btn = new QPushButton(demand_Tab);
        demandRefresh_btn->setObjectName(QStringLiteral("demandRefresh_btn"));
        demandRefresh_btn->setGeometry(QRect(280, 430, 75, 23));
        tableView = new QTableView(demand_Tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(-5, 0, 651, 411));
        delete_btn = new QPushButton(demand_Tab);
        delete_btn->setObjectName(QStringLiteral("delete_btn"));
        delete_btn->setGeometry(QRect(70, 430, 75, 23));
        info_tab->addTab(demand_Tab, QString());
        buy_Tab = new QWidget();
        buy_Tab->setObjectName(QStringLiteral("buy_Tab"));
        buyRefresh_btn = new QPushButton(buy_Tab);
        buyRefresh_btn->setObjectName(QStringLiteral("buyRefresh_btn"));
        buyRefresh_btn->setGeometry(QRect(280, 430, 75, 23));
        tableView_2 = new QTableView(buy_Tab);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(-5, 1, 651, 411));
        info_tab->addTab(buy_Tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        info_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        demandSubmit_btn->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244", Q_NULLPTR));
        demandRefresh_btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        delete_btn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        info_tab->setTabText(info_tab->indexOf(demand_Tab), QApplication::translate("MainWindow", "\351\234\200\346\261\202\345\210\227\350\241\250", Q_NULLPTR));
        buyRefresh_btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        info_tab->setTabText(info_tab->indexOf(buy_Tab), QApplication::translate("MainWindow", "\345\267\262\350\264\255\345\210\227\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
