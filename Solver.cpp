#include "Solver.h"
#include "Board.h"
#include "Node.h"

using namespace std;

Solver::Solver(){
    solved = false;
}

Solver::Solver(Board input){
    papan = input;
    solved = false;
}

// void Solver::eliminate(int x, int y){
//     eliminateVertical(int x, int y);
//     eliminateHorizontal(int x, int y);
//     eliminateSquare(int x, int y);
//
// }
//
// void Solver::eliminateVertical(int x, int y){
//     vector<int> kemungkinan = {1,2,3,4,5,6,7,8,9};
//     for(int i = 0; i<9;i++){
//         Node sementara = papan.getNode(x,i);
//         if(sementara.getIsi()!=0){
//
//         }
//     }
//
// }
//
// void Solver::eliminateHorizontal(int x, int y){
//
// }
//
// void Solver::eliminateSquare(int x, int y){
//
// }

bool Solver::isSafe(int x, int y, int isi){
    bool aman = true;

    //cek horizontal
    for(int i = 0; i<9;i++){
        Node sementara = papan.getNode(i,y);
        if(isi==sementara.getIsi()){
            aman = false;
            break;
        }
    }

    //cek vertikal
    if(aman){
        for(int i = 0; i<9;i++){
            Node sementara = papan.getNode(x,i);
            if(isi==sementara.getIsi()){
                aman = false;
                break;
            }
        }
    }


    //cek kotak primer
    if(aman){
        int kotakX = x/3;
        int kotakY = y/3;

        for(int i = (3*kotakX);i<=((3*kotakX)+2);i++){
            for(int j = (3*kotakY);j<=((3*kotakY)+2);j++){
                Node sementara = papan.getNode(x,i);
                if(isi==sementara.getIsi()){
                    aman = false;
                    break;
                }
            }
        }
    }

    //cek kotak sekunder
    if(aman && isDalamSekunder(x, y)){
        int kotakX;
        int kotakY;

        if(x<4){
            if(y<4){
                //kiri atas
                kotakX = 1;
                kotakY = 1;
            }else{
                //kiri bawah
                kotakX = 1;
                kotakY = 5;

            }
        }else{
            if(y<4){
                //kanan atas
                kotakX = 5;
                kotakY = 1;
            }else{
                kotakX = 5;
                kotakY = 5;
            }
        }

        for(int i = (3*kotakX);i<=((3*kotakX)+2);i++){
            for(int j = (3*kotakY);j<=((3*kotakY)+2);j++){
                Node sementara = papan.getNode(x,i);
                if(isi==sementara.getIsi()){
                    aman = false;
                    break;
                }
            }
        }
    }
}

bool Solver::isDalamSekunder(int x, int y){
    bool diDalam = true;

    if(x==0||x==4||y==0||y==4||x==8||y==8){
        diDalam = false;
    }

    return diDalam;
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
