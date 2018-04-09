#include "Solver.h"
#include "Board.h"
#include "Node.h"


Solver::Solver(){
    solved = false;
}

Solver::Solver(Board input){
    papan = input;
    solved = false;
}

void Solver::eliminate(int x, int y){

}

void Solver::eliminateVertical(int x, int y){

}

void Solver::eliminateHorizontal(int x, int y){

}

void Solver::eliminateSquare(int x, int y){

}

void Solver::solve(){

}

void Solver::setBoard(Board input){
    papan = input;
}

Board Solver::getBoard(){
    return papan;
}

bool Solver::isSolved(){
    return solved;
}
