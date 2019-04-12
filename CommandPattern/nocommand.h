#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "commandinterface.h"

class NoCommand : public Command
{
    Q_INTERFACES(Command)
public:
    NoCommand(){;}
    ~NoCommand(){;}
    void execute(){;}
    void undo(){;}

};

#endif // NOCOMMAND_H
