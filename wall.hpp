//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_WALL_HPP
#define LAB9_WALL_HPP

#include <iostream>

using namespace std;

/*wall class*/
class wall {
public:
    /*wall destrcutor*/
    ~wall() = default;

    /*virtual print function*/
    virtual void print() = 0;
};

#endif //LAB9_WALL_HPP
