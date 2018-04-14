#ifndef SOLVER_H
#define SOLVER_H

#include "Board.h"
#include "Node.h"
// Pendefinisian kelas dari penyelesaian sudoku
class Solver{
    private:
        Board papan;
        bool solved;
        // void eliminate(int x, int y);
        // void eliminateVertical(int x, int y);
        // void eliminateHorizontal(int x, int y);
        // void eliminateSquare(int x, int y);
        bool isSafe(int x, int y, int isi);
        bool isDalamSekunder(int x, int y);

    public:
        bool isZero(Board input, int &row, int &col);
        Solver();
        Solver(Board input);

        bool solve(Board input);
        bool isSolved();
        Board getBoard();
        void setBoard(Board input);
        



};

#endif
