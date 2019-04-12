#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "commandinterface.h"
#include "light.h"

class LightOffCommand : public Command
{
    Q_INTERFACES(Command)
public:
    LightOffCommand(Light* light);
    ~LightOffCommand();
    void execute();
    void undo();
private:
    Light* m_light;
};

#endif // LIGHTOFFCOMMAND_H
