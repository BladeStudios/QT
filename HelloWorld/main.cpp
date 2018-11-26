#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication program(argc, argv);

    QPushButton button("Hello World");
    button.resize(250,100);
    button.show();

    return program.exec();
}
