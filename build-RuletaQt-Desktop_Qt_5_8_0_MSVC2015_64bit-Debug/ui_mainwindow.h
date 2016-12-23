/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *titulo;
    QTextBrowser *textBrowser;
    QLCDNumber *numero;
    QLabel *imagenRuleta;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadJugadores;
    QPushButton *deleteJugador;
    QPushButton *addJugador;
    QPushButton *saveJugadores;
    QPushButton *status;
    QPushButton *play;
    QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1037, 620);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titulo = new QLabel(centralWidget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(30, 40, 131, 21));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 170, 231, 351));
        numero = new QLCDNumber(centralWidget);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(30, 70, 231, 81));
        imagenRuleta = new QLabel(centralWidget);
        imagenRuleta->setObjectName(QStringLiteral("imagenRuleta"));
        imagenRuleta->setGeometry(QRect(320, 70, 661, 381));
        imagenRuleta->setPixmap(QPixmap(QString::fromUtf8(":/mesa-ruleta-americana-un-0-ascasino.png")));
        imagenRuleta->setScaledContents(true);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(300, 490, 709, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loadJugadores = new QPushButton(widget);
        loadJugadores->setObjectName(QStringLiteral("loadJugadores"));

        horizontalLayout->addWidget(loadJugadores);

        deleteJugador = new QPushButton(widget);
        deleteJugador->setObjectName(QStringLiteral("deleteJugador"));

        horizontalLayout->addWidget(deleteJugador);

        addJugador = new QPushButton(widget);
        addJugador->setObjectName(QStringLiteral("addJugador"));

        horizontalLayout->addWidget(addJugador);

        saveJugadores = new QPushButton(widget);
        saveJugadores->setObjectName(QStringLiteral("saveJugadores"));

        horizontalLayout->addWidget(saveJugadores);

        status = new QPushButton(widget);
        status->setObjectName(QStringLiteral("status"));

        horizontalLayout->addWidget(status);

        play = new QPushButton(widget);
        play->setObjectName(QStringLiteral("play"));

        horizontalLayout->addWidget(play);

        exit = new QPushButton(widget);
        exit->setObjectName(QStringLiteral("exit"));

        horizontalLayout->addWidget(exit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1037, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        titulo->setText(QApplication::translate("MainWindow", "Ruleta", Q_NULLPTR));
        imagenRuleta->setText(QString());
        loadJugadores->setText(QApplication::translate("MainWindow", "Cargar jugador", Q_NULLPTR));
        deleteJugador->setText(QApplication::translate("MainWindow", "Borrar jugador", Q_NULLPTR));
        addJugador->setText(QApplication::translate("MainWindow", "A\303\261adir jugador", Q_NULLPTR));
        saveJugadores->setText(QApplication::translate("MainWindow", "Guardar jugador", Q_NULLPTR));
        status->setText(QApplication::translate("MainWindow", "Estado", Q_NULLPTR));
        play->setText(QApplication::translate("MainWindow", "Jugar", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
