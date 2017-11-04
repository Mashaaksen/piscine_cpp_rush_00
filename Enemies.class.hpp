#ifndef ENEMIES_CLASS_HPP
# define ENEMIES_CLASS_HPP

#include "Player.class.hpp"

class Enemies: public Player
{
public:
    Enemies(/*int y, int start_win, int end_win*/);
    Enemies(const Enemies &obj);
Enemies &operator=(const Enemies &obj);
    ~Enemies();
};

#endif