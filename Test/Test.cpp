#include "Node.h"
#include "Board.h"
#include "Solver.h"
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main () {
    Node isiContoh[9][9] = {{5,3,0,0,7,0,0,0,0},
            {6,0,0,1,9,5,0,0,0},
            {0,9,8,0,0,0,0,6,0},
            {8,0,0,0,6,0,0,0,3},
            {4,0,0,8,0,3,0,0,1},
            {7,0,0,0,2,0,0,0,6},
            {0,6,0,0,0,0,2,8,0},
            {0,0,0,4,1,9,0,0,5},
            {0,0,0,0,8,0,0,7,9}};
	Board board1(isiContoh);
	Solver solver1(board1);
	
	
    if (solver1.solve(board1)){
		solver1.getBoard().print();
	}
        
    
}
