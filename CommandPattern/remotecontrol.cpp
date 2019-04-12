#include "remotecontrol.h"
#include <QDebug>

#include "lightoncommand.h"
#include "nocommand.h"

RemoteControl::RemoteControl(int numberOfButton)
{
    qDebug() << "constructeur de RemoteControl";
    NoCommand* noCommand = new NoCommand();
    for(int i=0; i<numberOfButton-1; i++)
    {
        onCommands.append(noCommand);
        offCommands.append(noCommand);
    }
    undoCommand = noCommand;
}

RemoteControl::~RemoteControl()
{
    qDebug() << "destructeur de RemoteControl";
    for(auto c : onCommands)
    {
        delete c;
    }
    for(auto c : offCommands)
    {
        delete c;
    }
}

void RemoteControl::setCommand(int slot, Command *oncommand, Command *offcommand)
{
    onCommands.insert(slot, oncommand);
    offCommands.insert(slot, offcommand);
}

void RemoteControl::onButtonWasPushed(int slot)
{
    onCommands.at(slot)->execute();
    undoCommand = onCommands.at(slot);
}

void RemoteControl::offButtonWasPushed(int slot)
{
    offCommands.at(slot)->execute();
    undoCommand = offCommands.at(slot);
}

void RemoteControl::undoButtonWasPushed()
{
    undoCommand->undo();
}
