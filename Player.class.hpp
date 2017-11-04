#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

#include <iostream>

class Player
{
protected:
    int pos_x;
    int pos_y;
    char type;
public:
    Player();
    Player(const Player &obj);
    Player &operator=(const Player &obj);
    void move(int x, int y); //на какое количиство х или у необходимо сдвинуться;
    int overlap_coord(int x, int y);
    void die();
    ~Player();
};

#endif