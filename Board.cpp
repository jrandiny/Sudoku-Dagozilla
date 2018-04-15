#include "Board.h"
#include <vector>
#include "Node.h"
#include <iostream>
#include <fstream>

using namespace std;

Board::Board(){
    vector< vector<Node> > contoh = {{0,8,0,0,2,0,0,0,0},
            {0,0,0,0,0,0,0,2,0},
            {5,0,3,0,4,0,0,1,0},
            {0,0,0,0,0,0,0,9,0},
            {0,0,5,2,0,0,0,4,3},
            {0,6,0,1,7,0,5,0,0},
            {0,0,2,0,0,0,1,0,0},
            {0,0,0,0,0,2,0,0,0},
            {0,1,0,4,9,0,0,0,0}};

    this->papan = contoh;

}

Board::Board(vector< vector<Node> > input){
    this->papan =input;

}

void Board::setNode(int row, int col, Node input){
    papan[row][col] = input;
}

/*
*   Fungsi untuk mencetak ke layar
*/
void Board::print(){

    for(int i = 0; i<9;i++){
        for(int j = 0; j<9; j++){
            cout <<" "<< papan[i][j].getIsi();

            //mencetak pemisah
            if((j==2)||(j==5)){
                cout<<" |";
            }
        }
        //mencetak pemisah pada di antara 3/4 dan 6/7
        if((i==2)||(i==5)){
            cout<<endl<<"-----------------------"<<endl;
        }else{
            cout << endl;
        }

    }
}

/*
*   Fungsi yang bertindak untuk menyimpan output ke file
*/
void Board::printSave(string namaFile){
    ofstream save;
    save.open(namaFile);

    for(int i = 0; i<9;i++){
        for(int j = 0; j<9; j++){
            save <<" "<< papan[i][j].getIsi();

            //mencetak pemisah
            if((j==2)||(j==5)){
                save<<" |";
            }
        }
        //mencetak pemisah pada di antara 3/4 dan 6/7
        if((i==2)||(i==5)){
            save<<endl<<"-----------------------"<<endl;
        }else{
            save << endl;
        }
    }

}




void Board::setBoard(vector< vector<Node> > input){
    this->papan = input;
}

Node& Board::getNode(int row, int col){
    return papan[row][col];
}
