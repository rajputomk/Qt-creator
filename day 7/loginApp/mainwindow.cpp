#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString passwd = ui->lineEdit_password->text();

    if (username == "om" && passwd == "qt@1234") {
        QMessageBox::information(this, "Login", "Succesfully login.");
        hide();
        sd = new secondDialog(this);
        sd->show();
    } else {
        QMessageBox::warning(this, "Login", "username or password is incorrect, try again.");
    }
}

