#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *light)
{
    qDebug() << "constructeur de LightOffCommand";
    m_light=light;
}

LightOffCommand::~LightOffCommand()
{
    qDebug() << "destructeur de LightOffCommand";
    delete m_light;
}

void LightOffCommand::execute()
{
    m_light->off();
}

void LightOffCommand::undo()
{
    m_light->on();
}
