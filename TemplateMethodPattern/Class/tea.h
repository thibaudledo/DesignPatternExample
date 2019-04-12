#ifndef TEA_H
#define TEA_H

#include "Interfaces/caffeinebeverage.h"

class Tea : public CaffeineBeverage
{
    Q_INTERFACES(CaffeineBeverage)
public:
    Tea();
    void brew();
    void addCondiments();
};

#endif // TEA_H
