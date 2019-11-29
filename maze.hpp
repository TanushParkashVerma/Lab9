//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP

#include <iostream>
#include "door.hpp"
#include "room.hpp"
#include "wall.hpp"

using namespace std;

/*maze class*/
class maze {
    room *r;
    door *d;
    wall *w;
public:
    /*maze destructor*/
    ~maze() = default;

    /*vitual print function*/
    virtual void print() = 0;

    /*add_room function*/
    void add_room(room *room) {
        room = room;
    };

    /*add_wall function*/
    void add_wall(wall *wall) {
        wall = wall;
    };

    /*add_door function*/
    void add_door(door *door) {
        door = door;
    };
};


#endif //LAB9_MAZE_HPP
