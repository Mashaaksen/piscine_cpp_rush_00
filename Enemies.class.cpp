#include "Enemies.class.hpp"

    Enemies::Enemies()
    {
        this->type = 'x';
    }

    Enemies::Enemies(const Enemies &obj)
    {
        this->type = obj.type;
    }

Enemies& Enemies::operator=(const Enemies &obj)
    {
        this->type = obj.type;
        return (*this);
    }

    Enemies::~Enemies()
    {
    }