
#ifndef CLASSGAME_HPP
#define CLASSGAME_HPP

#include "player/rush_00.h"
#include <ncurses.h>
#include <iostream>
#include <unistd.h>

class Game {
private:
    WINDOW *wnd;

public:
    Game();
    Game(const Game &obj);
    Game &operator=(const Game &ob);
    void    run(void);

    ~Game();
};


#endif
