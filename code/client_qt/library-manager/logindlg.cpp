#include "logindlg.h"
#include "ui_logindlg.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
    connect(ui->loginBtn, SIGNAL(clicked()), this, SLOT(onLogin()));
    connect(ui->closeBtn, SIGNAL(clicked()), this, SLOT(onClose()));
}

LoginDlg::~LoginDlg()
{
    delete ui;
}

void LoginDlg::onLogin()
{
    if(ui->userName_Edit->text()=="admin"){
        this->close();
        this->parentWidget()->show();
    }else{
        QMessageBox::information(this,"user does not exist","User does not exist, please re-enter!");
    }
}

void LoginDlg::onClose()
{
    this->close();
}
