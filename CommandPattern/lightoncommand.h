#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "commandinterface.h"
#include "light.h"

class LightOnCommand : public Command
{
    Q_INTERFACES(Command)
public:
    LightOnCommand(Light* light);
    ~LightOnCommand();
    void execute();
    void undo();
private:
    Light* m_light;
};

#endif // LIGHTONCOMMAND_H
