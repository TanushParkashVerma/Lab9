//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_ROOM_HPP
#define LAB9_ROOM_HPP

#include <iostream>

using namespace std;

/*room class*/
class room {
public:
    /*room destructor*/
    ~room() = default;

    /*virtual print function*/
    virtual void print() = 0;
};

#endif //LAB9_ROOM_HPP
