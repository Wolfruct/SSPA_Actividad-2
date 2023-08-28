#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include "neurona.h"

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
    neurona *nueva = new neurona();
    nueva->set_all(111,123.12,3,4,1,1,2);
    neurona *nueva2 = new neurona();
    nueva2->set_all(333,95.52,6,2,5,4,2);
    neurona *nueva3 = new neurona();
    admin lista = admin();
    lista.agregar_inicio(nueva);
    lista.agregar_final(nueva2);
    lista.agregar_inicio(nueva3);
    lista.mostrar();
}

