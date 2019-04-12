#include "ceilingfanoff.h"

CeilingFanOff::CeilingFanOff(CeilingFan *ceilingFan)
{
    m_ceilingFan = ceilingFan;
}

CeilingFanOff::~CeilingFanOff()
{
    delete m_ceilingFan;
}

void CeilingFanOff::execute()
{
    prevSpeed = m_ceilingFan->getSpeed();
    m_ceilingFan->off();
}

void CeilingFanOff::undo()
{
    switch (prevSpeed) {
    case m_ceilingFan->HIGH:
        m_ceilingFan->high();
        break;
    case m_ceilingFan->MEDIUM:
        m_ceilingFan->medium();
        break;
    case m_ceilingFan->LOW:
        m_ceilingFan->low();
        break;
    case m_ceilingFan->OFF:
        m_ceilingFan->off();
        break;
    default:
        break;
    }
}
