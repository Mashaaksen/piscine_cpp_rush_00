#include "Attack.class.hpp"

    Attack::Attack()
    {
        this->type = '.';
    }

    Attack::Attack(const Attack &obj)
    {
        this->type = obj.type;
    }

Attack& Attack::operator=(const Attack &obj)
    {
        this->type = obj.type;
        return (*this);
    }

    Attack::~Attack()
    {
    }