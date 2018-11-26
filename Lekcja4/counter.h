#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
    Counter();
    int GetValue();

public slots:
    void SetValue(int a_Value);

signals:
    void ValueChanged(int a_Value);

private:
    int m_Number;
};

#endif // COUNTER_H
