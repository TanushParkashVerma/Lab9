//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP

#include <iostream>

using namespace std;

/*door class*/
class door {
public:
    /*door destructor*/
    ~door() = default;

    /*virtual print function*/
    virtual void print() = 0;
};

#endif //LAB9_DOOR_HPP
