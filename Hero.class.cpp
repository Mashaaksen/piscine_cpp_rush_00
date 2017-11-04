#include "Hero.class.hpp"

    Hero::Hero()
    {
        this->type = '^';
    }

    Hero::Hero(const Hero &obj)
    {
        this->type = obj.type;
    }

Hero& Hero::operator=(const Hero &obj)
    {
        this->type = obj.type;
        return (*this);
    }

    Hero::~Hero()
    {
    }