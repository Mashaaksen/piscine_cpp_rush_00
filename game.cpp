
#include "game.h"

WINDOW *wnd;

struct {
    vec2i pos;
    char disp_char;
} player;


int init() {
    wnd = initscr();
    cbreak();
    noecho();
    clear();
    refresh();

    keypad(wnd, true);
    //nodelay(wnd, true);
    curs_set(0);
    if(!has_colors()) {
        endwin();
        printf("ERROR: Terminal does not support color.\n");
        exit(1);
    }
    start_color();

    attron(A_BOLD);
    box(wnd, 0, 0);
    attroff(A_BOLD);

//    init_pair(1, COLOR_BLACK, COLOR_CYAN);
//    wbkgd(wnd, COLOR_PAIR(1));

    return 0;
}


void run() {

    player.disp_char = 'A';
    player.pos.x = 10;
    player.pos.y = 5;

    int in_char;

    bool exit_requested = false;

    while(1) {
        in_char = wgetch(wnd);

        mvaddch(player.pos.y, player.pos.x, ' ');

        switch (in_char) {
            case 'q':
                exit_requested = true;
                break;
            case KEY_UP:
            case 'w':
                player.pos.y -= 1;
                break;
            case KEY_DOWN:
            case 's':
                player.pos.y += 1;
                break;
            case KEY_LEFT:
            case 'a':
                player.pos.x -= 1;
                break;
            case KEY_RIGHT:
            case 'd':
                player.pos.x += 1;
                break;
            default:
                break;
        }

        mvaddch(player.pos.y, player.pos.x, player.disp_char);
        refresh();

        if (exit_requested) break;
    }
    usleep(10000);

    refresh();

    while(1);

//    move(5, 5);
//
//    std::string text = "Hello world!";
//    for(size_t i = 0; i < text.size(); i++) {
//        addch(text[i]);
//        addch(' ');
//    }
//
//    refresh();
}


void close() {
    endwin();
}