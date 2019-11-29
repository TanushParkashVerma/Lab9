//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_FAERY_DOOR_HPP
#define LAB9_FAERY_DOOR_HPP

#include "door.hpp"
#include "faery_room.hpp"

/*faery_door class*/
class faery_door : public door {
private:
    room *room1;
    room *room2;
public:
    /*constructor*/
    faery_door(room *r1, room *r2);

    /*faery_door destructor*/
    ~faery_door() = default;

    /*print function*/
    void print() override;
};

#endif //LAB9_FAERY_DOOR_HPP
