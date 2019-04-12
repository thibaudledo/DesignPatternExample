#ifndef CEILINGFANOFF_H
#define CEILINGFANOFF_H

#include "commandinterface.h"
#include "ceilingfan.h"

class CeilingFanOff : public Command
{
    Q_INTERFACES(Command)
public:
    CeilingFanOff(CeilingFan* ceilingFan);
    ~CeilingFanOff();
    void execute();
    void undo();
private:
    CeilingFan* m_ceilingFan;
    int prevSpeed;
};

#endif // CEILINGFANOFF_H
