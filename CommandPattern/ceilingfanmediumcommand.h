#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H


#include "commandinterface.h"
#include "ceilingfan.h"

class CeilingFanMediumCommand : public Command
{
    Q_INTERFACES(Command)
public:
    CeilingFanMediumCommand(CeilingFan* ceilingFan);
    ~CeilingFanMediumCommand();
    void execute();
    void undo();
private:
    CeilingFan* m_ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANMEDIUMCOMMAND_H
