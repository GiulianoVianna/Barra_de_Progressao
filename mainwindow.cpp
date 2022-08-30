#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chrono>
#include <thread>
#include <iostream>

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


void MainWindow::on_bt_start_clicked()
{

    for(float v= 0; v <= 100; v++){
        using namespace std::chrono_literals;
        std::this_thread::sleep_until(std::chrono::system_clock::now() + 0.5s);
        ui ->progressBar ->setValue(v);

        }
    }





