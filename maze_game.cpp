//
// Created by tanus on 2019-11-28.
//

#include "maze_game.hpp"

/*create_maze implementtaion*/
maze *maze_game::create_maze(maze_factory &make_maze) {
    wall *wall = make_maze.make_wall();
    room *r1 = make_maze.make_room();
    room *r2 = make_maze.make_room();
    door *d = make_maze.make_door(r1, r2);
    maze *m = make_maze.make_maze();
    m->add_wall(wall);
    m->add_room(r1);
    m->add_room(r2);
    m->add_door(d);
    return m;
}
