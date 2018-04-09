#ifndef SOLVER_H
#define SOLVER_H

#include "Board.h"
#include "Node.h"

class Solver{
    private:
        Board papan;

    public:
        Solver();
        Solver(Board input);

        void solve();
        Board getBoard();



};

#endif
