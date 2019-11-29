//
// Created by tanus on 2019-11-28.
//

#include "faery_land.hpp"

/*make_maze function*/
maze *faery_land::make_maze() {
    cout << "Making Maze" << endl;
    return new faery_maze;
}

/*make_wall function*/
wall *faery_land::make_wall() {
    cout << "Making Wall" << endl;
    return new faery_wall;
}

/*make_room function*/
room *faery_land::make_room() {
    cout << "Making Room" << endl;
    return new faery_room;
}

/*make_door function*/
door *faery_land::make_door(room *d1, room *d2) {
    cout << "Making Door" << endl;
    return new faery_door(d1, d2);
}

