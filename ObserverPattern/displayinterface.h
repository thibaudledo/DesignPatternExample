#ifndef DISPLAYINTERFACE_H
#define DISPLAYINTERFACE_H

class DisplayInterface
{
public:
    virtual void display(){;};
};

Q_DECLARE_INTERFACE(DisplayInterface, "DisplayInterface/1.0")

#endif // DISPLAYINTERFACE_H
