#include "Spellblade.h"

Spellblade::Spellblade(string n, int h, int p, int armor, int sp)
    : Hero(n, h, p), Warrior(n, h, p, armor), MagicalEntity(n, h, p, sp) {}

int Spellblade::calculateHybridDamage() const {
    return getPower() + spellPower;
}