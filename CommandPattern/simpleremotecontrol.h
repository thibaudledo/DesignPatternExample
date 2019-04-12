#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H

#include "commandinterface.h"

class SimpleRemoteControl
{
private:
    Command* slot;
public:
    SimpleRemoteControl();
    ~SimpleRemoteControl();
    void setCommand(Command* command);
    void buttonWasPressed();
};

#endif // SIMPLEREMOTECONTROL_H
