cmake_minimum_required(VERSION 3.14)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab9 main.cpp door.hpp maze.hpp maze_factory.hpp room.hpp wall.hpp maze_game.cpp maze_game.hpp faery_door.cpp faery_door.hpp faery_land.cpp faery_land.hpp faery_maze.cpp faery_maze.hpp faery_room.cpp faery_room.hpp faery_wall.cpp faery_wall.hpp)