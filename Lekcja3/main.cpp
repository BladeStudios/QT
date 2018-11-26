#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QLabel>
#include <QIcon>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);

    QApplication program(argc, argv);

    QMainWindow window;

    window.setGeometry(100,100,500,400);
    window.setWindowTitle("Okno Główne");

    QPushButton button("Zamknij", &window);
    button.setGeometry(200,350,100,40);

    button.setIcon(QIcon(":/images/exit.png"));

    QLabel label("Tekst etykiety :)", &window);
    label.setGeometry(200,150,400,50);

    QObject::connect(&button, SIGNAL(clicked()),&program,SLOT(quit()));

    window.show();

    return program.exec();
}
