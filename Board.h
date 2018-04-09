#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Node.h"

class Board{
    private:
        Node papan[9][9];

    public:
        Board();
        Board(Node input[9][9]);

        void setNode(int x, int y, Node input);
        void print();
        void setBoard(Node input[9][9]);
        Node getNode(int x, int y);

};

#endif
