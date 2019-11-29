//
// Created by tanus on 2019-11-28.
//

#include "faery_door.hpp"

/*print function*/
void faery_door::print() {
    cout << "Faery Door" << endl;
}

/*faery_door constructor*/
faery_door::faery_door(room *r1, room *r2) {
    room1 = r1;
    room2 = r2;
}
