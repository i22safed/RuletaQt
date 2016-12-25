#include "mainwindow.h"
#include "ui_mainwindow.h"

// Constructor de la clase MainWindow

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


void MainWindow::on_loadJugadores_clicked()
{

}

void MainWindow::on_deleteJugador_clicked()
{

}


void MainWindow::on_addJugador_clicked()
{

}


void MainWindow::on_saveJugadores_clicked()
{

}

void MainWindow::on_status_clicked()
{

}

void MainWindow::on_play_clicked()
{

}

void MainWindow::on_exit_clicked()
{

}

// Destructor de la clase MainWindow

MainWindow::~MainWindow()
{
    delete ui;
}
