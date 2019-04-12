#include "ceilingfanmediumcommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *ceilingFan)
{
    m_ceilingFan = ceilingFan;
}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{
    delete m_ceilingFan;
}

void CeilingFanMediumCommand::execute()
{
    prevSpeed = m_ceilingFan->getSpeed();
    m_ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
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
