#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Node.h"
//Pendefinisian kelas dari kotak sudoku 9*9
class Board{
    private:
        vector< vector<Node> > papan;

    public:
        Board();
        Board(vector< vector<Node> > input);

        void setNode(int x, int y, Node input);
        void print();
        void setBoard(vector< vector<Node> > input);
        Node& getNode(int x, int y);

};

#endif
