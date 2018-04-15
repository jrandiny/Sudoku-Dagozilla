#include "Board.h"
#include <vector>
#include "Node.h"
#include <iostream>

using namespace std;

Board::Board(){
    vector< vector<Node> > contoh = {{5,3,0,0,7,0,0,0,0},
            {6,0,0,1,9,5,0,0,0},
            {0,9,8,0,0,0,0,6,0},
            {8,0,0,0,6,0,0,0,3},
            {4,0,0,8,0,3,0,0,1},
            {7,0,0,0,2,0,0,0,6},
            {0,6,0,0,0,0,2,8,0},
            {0,0,0,4,1,9,0,0,5},
            {0,0,0,0,8,0,0,7,9}};

    this->papan = contoh;

}

Board::Board(vector< vector<Node> > input):papan(input){

}

void Board::setNode(int x, int y, Node input){
    papan[x][y] = input;
}

void Board::print(){
    for(int i = 0; i<9;i++){
        for(int j = 0; j<9; j++){
            cout << papan[i][j].getIsi();
        }
        cout << endl;
    }

}

void Board::setBoard(vector< vector<Node> > input){
    this->papan = input;
}

Node& Board::getNode(int x, int y){
    return papan[x][y];
}
