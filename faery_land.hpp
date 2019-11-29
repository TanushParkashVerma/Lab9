//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_FAERY_LAND_HPP
#define LAB9_FAERY_LAND_HPP


#include "maze_factory.hpp"
#include "faery_door.hpp"
#include "faery_room.hpp"
#include "faery_wall.hpp"
#include "faery_maze.hpp"
#include <iostream>

using namespace std;

/*faery_land class*/
class faery_land : public maze_factory {
public:
    /*faery_land destructor*/
    ~faery_land() = default;

    /*make_maze function*/
    maze *make_maze() override;

    /*make_wall function*/
    wall *make_wall() override;

    /*make_room function*/
    room *make_room() override;

    /*make_door function*/
    door *make_door(room *d1, room *d2) override;
};

#endif //LAB9_FAERY_LAND_HPP
