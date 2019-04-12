#include "simpleremotecontrol.h"
#include <QDebug>

SimpleRemoteControl::SimpleRemoteControl()
{
    qDebug() << "constructeur de SimpleRemoteControl";
}

SimpleRemoteControl::~SimpleRemoteControl()
{
    qDebug() << "destructeur de SimpleRemoteControl";
    delete slot;
}

void SimpleRemoteControl::setCommand(Command *command)
{
    slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    slot->execute();
}
