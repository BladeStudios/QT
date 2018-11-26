#include <iostream>
#include <QCoreApplication>
#include "Counter.h"

int main(int argc, char *argv[])
{
    QCoreApplication program(argc, argv);

    Counter first,second;

    QObject::connect(&first, SIGNAL(ValueChanged(int)), &second, SLOT(SetValue(int)));

    first.SetValue(4);

    std::cout<< "first = " << first.GetValue() << std::endl;
    std::cout << "second = " << second.GetValue() << std::endl;

    second.SetValue(7);

    std::cout << "first = " << first.GetValue() << std::endl;
    std::cout << "second = " << second.GetValue() << std::endl;

    QObject::disconnect(&first, SIGNAL(ValueChanged(int)), &second, SLOT(SetValue(int)));

    first.SetValue(13);

    std::cout << "first = " << first.GetValue() << std::endl;
    std::cout << "second = " << second.GetValue() << std::endl;

    return program.exec();
}
