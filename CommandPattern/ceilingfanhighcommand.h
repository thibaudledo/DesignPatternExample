#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H

#include "commandinterface.h"
#include "ceilingfan.h"

class CeilingFanHighCommand : public Command
{
    Q_INTERFACES(Command)
public:
    CeilingFanHighCommand(CeilingFan* ceilingFan);
    ~CeilingFanHighCommand();
    void execute();
    void undo();
private:
    CeilingFan* m_ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANHIGHCOMMAND_H
