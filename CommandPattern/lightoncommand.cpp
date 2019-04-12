#include "lightoncommand.h"
#include <QDebug>

LightOnCommand::LightOnCommand(Light *light)
{
    qDebug() << "constructeur de LightOnCommand";
    m_light=light;
}

LightOnCommand::~LightOnCommand()
{
    qDebug() << "destructeur de LightOnCommand";
    delete m_light;
}

void LightOnCommand::execute()
{
    m_light->on();
}

void LightOnCommand::undo()
{
    m_light->off();
}
