#ifndef NYSTYLEVEGGIEPIZZA_H
#define NYSTYLEVEGGIEPIZZA_H

#include "Interface/pizza.h"

class NYStyleVeggiePizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    NYStyleVeggiePizza();
};

#endif // NYSTYLEVEGGIEPIZZA_H
