#include "Hero.h"

Hero::Hero(string n, int h, int p) {
    name = n;
      health = h;
    basePower = p;



}

void Hero::takeDamage(int damage) {
    health -= damage;
    if (health < 0)
    {
        health = 0;
    }
}

bool Hero::operator>(const Hero& other) const
{
    if (basePower > other.basePower)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Hero::operator+(const Hero& other) const
{
    int totalHealth;
    totalHealth = health + other.health;
    return totalHealth;
}

string Hero::getName() const {
    return name;
}

int Hero::getHealth() const {
    return health;
}

int Hero::getPower() const {
    return basePower;
}

Hero::~Hero() {}