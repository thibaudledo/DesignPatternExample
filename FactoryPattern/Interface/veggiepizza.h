#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "pizza.h"

class VeggiePizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    VeggiePizza();
};

Q_DECLARE_INTERFACE(VeggiePizza, "VeggiePizza/1.0")

#endif // VEGGIEPIZZA_H
