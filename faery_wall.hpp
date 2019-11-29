//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_FAERY_WALL_HPP
#define LAB9_FAERY_WALL_HPP


#include "wall.hpp"

/*faery_wall class*/
class faery_wall : public wall {
public:
    /*faery_wall destructor*/
    ~faery_wall() = default;

    /*faery_maze print function*/
    void print() override;
};

#endif //LAB9_FAERY_WALL_HPP
