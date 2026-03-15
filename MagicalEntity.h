#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include "Hero.h"

class MagicalEntity : virtual public Hero {
protected:
    int spellPower;

public:
    MagicalEntity(string n, int h, int p, int sp);
};

#endif
