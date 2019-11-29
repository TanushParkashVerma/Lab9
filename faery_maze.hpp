//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_FAERY_MAZE_HPP
#define LAB9_FAERY_MAZE_HPP


#include "maze.hpp"

/*faery_maze class*/
class faery_maze : public maze {
public:
    /*faery_maze destructor*/
    ~faery_maze() = default;

    /*print function*/
    void print() override;
};

#endif //LAB9_FAERY_MAZE_HPP
