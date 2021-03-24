#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include <string.h>
using namespace std;
namespace ariel {


void Board::post(unsigned int row, unsigned int column, Direction direction, const std::string &post) {
     cout << "posting" << endl;
 }

std::string Board::read(unsigned int row, unsigned int column, Direction direction, int length) {
    cout << "read" << endl;
    return "new board";
}

void Board::show() {
}


}