/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QLineEdit *userName_Edit;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(400, 300);
        userName_Edit = new QLineEdit(LoginDlg);
        userName_Edit->setObjectName(QStringLiteral("userName_Edit"));
        userName_Edit->setGeometry(QRect(160, 90, 133, 31));
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 90, 71, 31));
        widget = new QWidget(LoginDlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 210, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginBtn = new QPushButton(widget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));

        horizontalLayout->addWidget(loginBtn);

        closeBtn = new QPushButton(widget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout->addWidget(closeBtn);


        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("LoginDlg", "\347\231\273\345\275\225", Q_NULLPTR));
        closeBtn->setText(QApplication::translate("LoginDlg", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
