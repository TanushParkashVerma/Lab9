//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP


#include "maze_factory.hpp"

/*maze_game class*/
class maze_game {
public:
    /*maze_game destructor*/
    ~maze_game() = default;

    /*craete_maze fucntion*/
    maze *create_maze(maze_factory &make_maze);
};

#endif //LAB9_MAZE_GAME_HPP
