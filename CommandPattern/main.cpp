#include <QCoreApplication>

#include "commandinterface.h"

#include "light.h"
#include "lightoncommand.h"
#include "lightoffcommand.h"

#include "simpleremotecontrol.h"
#include "remotecontrol.h"

#include "ceilingfanhighcommand.h"
#include "ceilingfanmediumcommand.h"
#include "ceilingfanoff.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*
    SimpleRemoteControl* remote = new SimpleRemoteControl();
    Light* light = new Light("kitchen");
    LightOnCommand* lightOn = new LightOnCommand(light);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();

    delete remote;

    /**/

    int numberOfButton = 7;

    Light* light1 = new Light("kitchen");
    Light* light2 = new Light("living room");
    Light* light3 = new Light("bedroom 1");
    Light* light4 = new Light("bedroom 2");
    Light* light5 = new Light("bedroom 3");
    Light* light6 = new Light("bathroom 1");
    Light* light7 = new Light("bathroom 2");

    LightOnCommand* lightOn1 = new LightOnCommand(light1);
    LightOnCommand* lightOn2 = new LightOnCommand(light2);
    LightOnCommand* lightOn3 = new LightOnCommand(light3);
    LightOnCommand* lightOn4 = new LightOnCommand(light4);
    LightOnCommand* lightOn5 = new LightOnCommand(light5);
    LightOnCommand* lightOn6 = new LightOnCommand(light6);
    LightOnCommand* lightOn7 = new LightOnCommand(light7);

    LightOffCommand* lightOff1 = new LightOffCommand(light1);
    LightOffCommand* lightOff2 = new LightOffCommand(light2);
    LightOffCommand* lightOff3 = new LightOffCommand(light3);
    LightOffCommand* lightOff4 = new LightOffCommand(light4);
    LightOffCommand* lightOff5 = new LightOffCommand(light5);
    LightOffCommand* lightOff6 = new LightOffCommand(light6);
    LightOffCommand* lightOff7 = new LightOffCommand(light7);

    CeilingFan* ceilingFan = new CeilingFan("Office");
    CeilingFanHighCommand* ceilingFanCommand1 = new CeilingFanHighCommand(ceilingFan);
    CeilingFanMediumCommand* ceilingFanCommand2 = new CeilingFanMediumCommand(ceilingFan);
    CeilingFanOff* ceilingFanOffCommand = new CeilingFanOff(ceilingFan);

    RemoteControl* remote = new RemoteControl(numberOfButton);

    remote->setCommand(1,lightOn1, lightOff1);
    remote->setCommand(2,lightOn2, lightOff2);
    remote->setCommand(3,lightOn3, lightOff3);
    remote->setCommand(4,lightOn4, lightOff4);
    remote->setCommand(5,lightOn5, lightOff5);
    remote->setCommand(6,lightOn6, lightOff6);
    remote->setCommand(7,lightOn7, lightOff7);

    remote->setCommand(5, ceilingFanCommand2, ceilingFanOffCommand);
    remote->setCommand(7, ceilingFanCommand1, ceilingFanOffCommand);

    for(int i=1; i<= numberOfButton; i++)
    {
     remote->onButtonWasPushed(i);
    }
    remote->undoButtonWasPushed();
    for(int i=1; i<= numberOfButton; i++)
    {
        remote->offButtonWasPushed(i);
    }

    //remote->setCommand(5, [&, light5](void){light5->on();}, [&, light5](void){light5->off();});

    return a.exec();
}
