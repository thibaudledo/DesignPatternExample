#ifndef COMMANDINTERFACE_H
#define COMMANDINTERFACE_H

#include <QObject>

class Command
{
public:
    Command(){;}
    virtual ~Command(){;}
    virtual void execute() = 0;
    virtual void undo() = 0;
};

Q_DECLARE_INTERFACE(Command, "Command/1.0")

#endif // COMMANDINTERFACE_H
