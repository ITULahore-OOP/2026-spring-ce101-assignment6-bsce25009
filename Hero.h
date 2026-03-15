#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    int health;
    int basePower;

public:
    Hero(string n, int h, int p);

    void takeDamage(int damage);

    bool operator>(const Hero& other) const;

    int operator+(const Hero& other) const;

    string getName() const;
    int getHealth() const;
    int getPower() const;

    virtual ~Hero();
};

#endif
