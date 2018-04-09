#ifndef SOLVER_H
#define SOLVER_H

#include "Board.h"
#include "Node.h"

class Solver{
    private:
        Board papan;
        bool solved;

    public:
        Solver();
        Solver(Board input);

        void solve();
        bool isSolved();
        Board getBoard();
        void setBoard(Board input);



};

#endif
