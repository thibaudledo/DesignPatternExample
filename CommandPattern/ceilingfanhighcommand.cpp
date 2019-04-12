#include "ceilingfanhighcommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *ceilingFan)
{
    m_ceilingFan = ceilingFan;
}

CeilingFanHighCommand::~CeilingFanHighCommand()
{
    delete m_ceilingFan;
}

void CeilingFanHighCommand::execute()
{
    prevSpeed = m_ceilingFan->getSpeed();
    m_ceilingFan->high();
}

void CeilingFanHighCommand::undo()
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
