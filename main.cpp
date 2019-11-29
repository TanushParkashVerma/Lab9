#include <iostream>
#include "maze_game.hpp"
#include "faery_land.hpp"

int main() {

    /*Instantiating maze_game and passing it oto create_maze*/
    maze_game mazeGame;
    maze *maze_faery = mazeGame.create_maze(*(new faery_land()));
    maze_faery->print();

    return 0;
}