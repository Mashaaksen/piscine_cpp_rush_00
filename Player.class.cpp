#include "Player.class.hpp"

    Player::Player()
    {
        this->pos_x = 0;
        this->pos_y = 0;
        this->type = '-';
    }

    Player::Player(const Player &obj)
    {
        this->pos_x = obj.pos_x;
        this->pos_y = obj.pos_y;
        this->type = obj.type;
    }

Player &Player::operator=(const Player &obj)
    {
        this->pos_x = obj.pos_x;
        this->pos_y = obj.pos_y;
        this->type = obj.type;
        return (*this);
    }

void  Player::move(int x, int y)
    {
        this->pos_x += x;
        this->pos_y += y;
    }

void Player::die()
    {
        this->type = '-';
    }

int   Player::overlap_coord(int x, int y)
    {
        if (this->pos_x == x && this->pos_y == y)
        {
            this->die();
            return (0);
        }
        return (1);
    }

    Player::~Player()
    {
        std::cout<<this->type<<std::endl;
    }