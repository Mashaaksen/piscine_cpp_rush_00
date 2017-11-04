#include "Attack.class.hpp"

    Attack::Attack(int x, int y)
    {
        this->type = '.';
        this->pos_x = x;
        this->pos_y = y;
    }

    Attack::Attack(const Attack &obj)
    {
        this->type = obj.type;
        this->pos_x = obj.x;
        this->pos_y = obj.y;
    }

Attack& Attack::operator=(const Attack &obj)
    {
        this->type = obj.type;
        this->pos_x = obj.x;
        this->pos_y = obj.y;
        return (*this);
    }

    Attack::~Attack()
    {
    }