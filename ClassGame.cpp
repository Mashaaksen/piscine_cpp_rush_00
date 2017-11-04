
#include "ClassGame.hpp"

Game::Game() {
    this->wnd = initscr();
    cbreak();
    noecho();
    start_color();
    keypad(wnd, true);
    attron(A_BOLD);
    box(wnd, 0, 0);
    attroff(A_BOLD);
}


void Game::run() {
    int in_char;

    Hero hero;
    Attack attack;

    bool exit_requested = false;

    while(1) {
        in_char = wgetch(wnd);
        mvaddch(hero.get_y(), hero.get_x(), ' ');
        mvaddch(attack.get_y(), attack.get_x(), ' ');
        switch (in_char) {
            case 'q':
                exit_requested = true;
                break;
            case KEY_UP:
            case 'w':
                hero.move(0, -1);
                break;
            case ' ': {
            attack.move(hero.get_y() - 1, hero.get_x());
                break;
            }
            case KEY_DOWN:
            case 's':
                hero.move(0 , 1);
                break;
            case KEY_LEFT:
            case 'a':
                hero.move(-1 , 0);
                break;
            case KEY_RIGHT:
            case 'd':
                hero.move(1 , 0);
                break;
            default:
                break;
        }
        attack.move(0, -1);
        if (attack.get_y() != 0)
            mvaddch(attack.get_y(), attack.get_x(), attack.get_type());
        mvaddch(hero.get_y(), hero.get_x(), hero.get_type());
        refresh();
        if (exit_requested) break;
    }
    usleep(10000);

    refresh();

    while(1);
}

Game::~Game() {
    endwin();
}