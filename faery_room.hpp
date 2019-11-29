//
// Created by tanus on 2019-11-28.
//

#ifndef LAB9_FAERY_ROOM_HPP
#define LAB9_FAERY_ROOM_HPP


#include "room.hpp"

/*faery_room class*/
class faery_room : public room {
public:
    /*faery_room destructor*/
    ~faery_room() = default;

    /*print function*/
    void print() override;
};

#endif //LAB9_FAERY_ROOM_HPP
