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
        bool isEmpty(int x, int y, Node input[9][9], Board papan);  // ngecek apakah isinya 0 atau angka lain

    public:
        Solver();
        Solver(Board input);

        void solve();
        bool isSolved();
        Board getBoard();
        void setBoard(Board input);



};

#endif
