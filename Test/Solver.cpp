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

/*
* Menerima lokasi x, y, dan data yang ingin diisikan
* Akan mereturn true jika bisa dimasukkan
*/
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
  return aman;
}

/*
* Mengecek apakah suatu koordinat x,y ada di dalam kotak sekunder
*/
bool Solver::isDalamSekunder(int x, int y){
    bool diDalam = true;

    if(x==0||x==4||y==0||y==4||x==8||y==8){
        diDalam = false;
    }

    return diDalam;
}

bool isZero(Board input, int &row, int &col)
{
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (input[row][col] == 0)
                return true;
    return false;
}
 
bool Solver::solve(Board input){
	int row, col;
 
    // Jika tidak ada lokasi yang kosong
    if (!isZero(input, row, col))
       return true; 
 
    // mencoba menggunakan angka 1-9
    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(row, col, num))
        {
            input[row][col] = num;
            if (solve(input))
                return true;
            input[row][col] = 0;
        }
    }
    return false;
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
