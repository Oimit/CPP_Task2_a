#ifndef __BOARD_H
#define __BOARD_H
#include <iostream>
#include <string.h>
#include "Direction.hpp"
using namespace std;


namespace ariel {

class Board{

    public:

     static void post(unsigned int row, unsigned int column, Direction direction, const std::string &post);

     static std::string read(unsigned int row, unsigned int column, Direction direction, int length);

     static void show();
};

}
#endif