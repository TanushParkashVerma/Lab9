//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_MAZE_FACTORY_HPP
#define LAB9_MAZE_FACTORY_HPP

#include "wall.hpp"
#include "room.hpp"
#include "maze.hpp"
#include "door.hpp"


/*maze_factory class*/
class maze_factory {
private:

public:
    /*maze_factory destructor*/
    ~maze_factory() = default;

    /*make_maze function*/
    virtual maze *make_maze() = 0;

    /*make_wall function*/
    virtual wall *make_wall() = 0;

    /*make_room function*/
    virtual room *make_room() = 0;

    /*make_door function*/
    virtual door *make_door(room *r1, room *r2) = 0;
};

#endif //LAB9_MAZE_FACTORY_HPP
