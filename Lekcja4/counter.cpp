#include "counter.h"

Counter::Counter() : m_Number(0)
{
    //EMPTY
}

int Counter::GetValue()
{
    return m_Number;
}

void Counter::SetValue(int a_Value)
{
    if(m_Number!=a_Value)
    {
        m_Number=a_Value;
        emit ValueChanged(m_Number);
    }
}
