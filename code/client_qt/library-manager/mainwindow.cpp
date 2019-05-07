#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->demandRefresh_btn, SIGNAL(clicked()), this, SLOT(onDemandRefresh_btn()));
    connect(ui->demandSubmit_btn, SIGNAL(clicked()), this, SLOT(onDemandSubmit_btn()));

    connect(ui->buyRefresh_btn, SIGNAL(clicked()), this, SLOT(onBuyRefresh_btn()));
    connect(ui->delete_btn, SIGNAL(clicked()), this, SLOT(onDelete_btn()));
    //设置整行选中
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);

    //构建窗口对象时刷新两个tab
//    this->onDemandRefresh_btn();
//    this->onBuyRefresh_btn();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::onDemandRefresh_btn
 * 需求刷新按钮:
 * 1.查询需求表状态字段值为待购的条目返回
 * 2.更新到list控件
 */
void MainWindow::onDemandRefresh_btn()
{
    QString sql="select * from Demand where state='待购';";
    //QString sql="select * from Bookseller;";
    QSqlQueryModel *model = new QSqlQueryModel;
    //QStandardItemModel* model = new QStandardItemModel();
    model->setQuery(sql);
    qDebug()<<"更新list查询:"<<sql;
    model->setHeaderData(0, Qt::Horizontal, tr("bookName"));
    model->setHeaderData(1, Qt::Horizontal, tr("publisher"));
    model->setHeaderData(2, Qt::Horizontal, tr("ISBN"));
    model->setHeaderData(3, Qt::Horizontal, tr("demandNum"));
    model->setHeaderData(4, Qt::Horizontal, tr("state"));
    ui->tableView->setModel(model);
    //delete model;
}

/**
 * @brief MainWindow::onDemandSubmit_btn
 * 需求提交按钮:
 * 修改Demand表中对应SN码的行的状态为已购
 *
 */
void MainWindow::onDemandSubmit_btn()
{
    //int curRow= ui->tableView->currentIndex().row();//获取选中行号
    for(int curRow=0;curRow<ui->tableView->model()->rowCount();++curRow)
    {
        QAbstractItemModel *modessl = ui->tableView->model();
        QModelIndex tmpIndex0 = modessl->index(curRow,2);//第0列(号列)
        QString isbn=modessl->data(tmpIndex0).toString();//保存号为string类型将加入sql查询
        //QString isbn=ui->tableView->currentIndex().data().toString();
        qDebug()<<isbn;

        //依照isbn码执行修改操作
        QString sql="update Demand set state='已购' where ISBN='"+isbn+"';";

        QSqlQuery query;
        qDebug()<<sql;
        query.prepare(sql);//指定sql语句
        query.exec();
    }

    onDemandRefresh_btn();//刷新列表
    onBuyRefresh_btn();//刷新已购列表
}

/**
 * @brief MainWindow::onBuyRefresh_btn
 * 已购买刷新按钮:
 * 1.查询需求表状态字段值为已购的条目返回
 * 2.更新到list控件
 */
void MainWindow::onBuyRefresh_btn()
{
    QString sql="select * from Demand where state='已购';";
    QSqlQueryModel *model = new QSqlQueryModel;
    //QStandardItemModel* model = new QStandardItemModel();
    model->setQuery(sql);
    qDebug()<<"更新list查询:"<<sql;
    model->setHeaderData(0, Qt::Horizontal, tr("bookName"));
    model->setHeaderData(1, Qt::Horizontal, tr("publisher"));
    model->setHeaderData(2, Qt::Horizontal, tr("ISBN"));
    model->setHeaderData(3, Qt::Horizontal, tr("demandNum"));
    model->setHeaderData(4, Qt::Horizontal, tr("state"));
    ui->tableView_2->setModel(model);
}

/**
 * @brief MainWindow::onDelete_btn
 * 选中一行后点击删除按钮
 * 删除数据库对应的行, 参照ISBN码
 */
void MainWindow::onDelete_btn()
{
    int curRow= ui->tableView->currentIndex().row();//获取选中行号
    QAbstractItemModel *modessl = ui->tableView->model();
    QModelIndex tmpIndex0 = modessl->index(curRow,2);//第0列(号列)
    QString isbn=modessl->data(tmpIndex0).toString();//保存号为string类型将加入sql查询
    //QString isbn=ui->tableView->currentIndex().data().toString();
    qDebug()<<isbn;

    //依照isbn码执行删除操作
    QString sql="delete from Demand where ISBN='"+isbn+"';";

    QSqlQuery query;
    qDebug()<<sql;
    query.prepare(sql);//指定sql语句
    query.exec();
    onDemandRefresh_btn();//刷新列表
}

