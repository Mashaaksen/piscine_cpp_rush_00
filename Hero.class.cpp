#include "Hero.class.hpp"

    Hero::Hero(int x, int y)
    {
        this->type = '^';
        this->pos_x = x;
        this->pos_y = y;
    }

    Hero::Hero(const Hero &obj)
    {
        this->type = obj.type;
        this->pos_x = obj.x;
        this->pos_y = obj.y;
    }

Hero& Hero::operator=(const Hero &obj)
    {
        this->type = obj.type;
        this->pos_x = obj.x;
        this->pos_y = obj.y;
        return (*this);
    }

    Hero::~Hero()
    {
    }