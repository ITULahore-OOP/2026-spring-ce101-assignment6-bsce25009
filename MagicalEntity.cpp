#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(string n, int h, int p, int sp)
    : Hero(n, h, p) {
    spellPower = sp;
}