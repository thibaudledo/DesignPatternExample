#ifndef CHICAGOSTYLEVEGGIEPIZZA_H
#define CHICAGOSTYLEVEGGIEPIZZA_H

#include "Interface/pizza.h"

class ChicagoStyleVeggiePizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    ChicagoStyleVeggiePizza();
};

#endif // CHICAGOSTYLEVEGGIEPIZZA_H
