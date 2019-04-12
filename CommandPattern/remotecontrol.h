#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "commandinterface.h"
#include <QList>

class RemoteControl
{
private:
    QList<Command*> onCommands;
    QList<Command*> offCommands;
    Command* undoCommand;

public:
    RemoteControl(int numberOfButton);
    ~RemoteControl();
    void setCommand(int slot, Command* oncommand, Command* offcommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();
};

#endif // REMOTECONTROL_H
