#ifndef ATTACK_CLASS_HPP
# define ATTACK_CLASS_HPP

#include "Player.class.hpp"

class Attack: public Player
{
public:
    Attack(int x, int y);
    Attack(const Attack &obj);
Attack &operator=(const Attack &obj);
    ~Attack();
};

#endif