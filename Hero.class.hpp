#ifndef HERO_CLASS_HPP
# define HERO_CLASS_HPP

#include "Player.class.hpp"

class Hero: public Player
{
public:
    Hero();
    Hero(const Hero &obj);
Hero &operator=(const Hero &obj);
    ~Hero();
};

#endif