
#include "ClassGame.hpp"

//int main(int argc, char** argv) {
//
////    initscr();
////    cbreak();
////    noecho();
////    clear();
////    move(5, 5);
////    std::string text = "Hello world!";
////    for(int i = 0; i < text.size(); i++) {
////        addch(text[i]);
////        addch(' ');
////    }
////    refresh();
////    while(1);
////    return (0);
//
//    int init_status = init();
//
//    if(init_status == 0)
//        run();
//
//    close();
//
//    return 0;
//}

int main(int argc, char **argv) {
    Game game;
    game.run();
}