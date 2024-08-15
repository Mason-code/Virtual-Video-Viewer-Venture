/*
Content: It usually creates an instance of the QApplication class, creates the main window (likely an instance of the 'MainWindow' class), and starts the event loop by calling 'app.exec()'
Details: The 'main.cpp' file sets up the environment for the application and launches the UI.
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
