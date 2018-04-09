#include "Board.h"
#include <vector>
#include "Node.h"

Board::Board(){

}

Board::Board(Node input[9][9]){
    // papan = input;
}

void Board::setNode(int x, int y, Node input){
    papan[x+1][y+1] = input;
}

void Board::print(){

}

void Board::setBoard(Node input[9][9]){
    // papan = input;
}
