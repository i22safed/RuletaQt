#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_loadJugadores_clicked();

    void on_deleteJugador_clicked();

    void on_addJugador_clicked();

    void on_saveJugadores_clicked();

    void on_status_clicked();

    void on_play_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
