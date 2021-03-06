#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Node.h"
#include <iostream>

using namespace std;

//Pendefinisian kelas dari kotak sudoku 9*9
class Board{
    private:
        vector< vector<Node> > papan;

    public:
        Board();
        Board(vector< vector<Node> > input);

        void setNode(int row, int col, Node input);
        void print();
        void printSave(string namaFile);
        void setBoard(vector< vector<Node> > input);
        Node& getNode(int row, int col);

};

#endif
