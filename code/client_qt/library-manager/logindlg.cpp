#include "logindlg.h"
#include "ui_logindlg.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
    connect(ui->loginBtn, SIGNAL(clicked()), this, SLOT(onLogin()));
    connect(ui->closeBtn, SIGNAL(clicked()), this, SLOT(onClose()))
}

LoginDlg::~LoginDlg()
{
    delete ui;
}

LoginDlg::onLogin()
{

}

LoginDlg::onClose()
{
    this->close();
}
