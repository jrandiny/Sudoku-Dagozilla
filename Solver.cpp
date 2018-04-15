#include "Solver.h"
#include "Board.h"
#include "Node.h"
#include <iostream>

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
bool Solver::isSafe(Board input, int row, int col, int isi){
    bool aman = true;

    //cek horizontal
    for(int i = 0; i<9;i++){
        Node sementara = input.getNode(row,i);
        if(isi==sementara.getIsi()){
            clog<<"not pass horiz"<<endl;
            aman = false;
            break;
        }
    }

    //cek vertikal
    if(aman){
        for(int i = 0; i<9;i++){
            Node sementara = input.getNode(i,col);
            if(isi==sementara.getIsi()){
                clog<<"not pass ver"<<endl;
                aman = false;
                break;
            }
        }
    }


    //cek kotak primer
    if(aman){
        //div untuk cari ujung kiri atas kotak primer
        int kotakY = row/3;
        int kotakX = col/3;

        //cari di semua kotak dari kotak primer
        for(int i = (3*kotakX);i<=((3*kotakX)+2);i++){
            for(int j = (3*kotakY);j<=((3*kotakY)+2);j++){
                Node sementara = input.getNode(j,i);
                if(isi==sementara.getIsi()){
                    clog<<"not pass primer"<<endl;
                    aman = false;
                    break;
                }
            }
        }
    }

    //cek kotak sekunder
    if(aman && isDalamSekunder(row, col)){
        int kotakX;
        int kotakY;

        //cari pojok kiri atas kotak sekunder
        if(col<4){
            if(row<4){
                //kiri atas
                clog<<"sek kir atas"<<endl;
                kotakX = 1;
                kotakY = 1;
            }else{
                //kiri bawah
                clog<<"sek kir baw"<<endl;
                kotakX = 1;
                kotakY = 5;

            }
        }else{
            if(row<4){
                //kanan atas
                clog<<"sek kana ats"<<endl;
                kotakX = 5;
                kotakY = 1;
            }else{
                clog<<"sek kana baw"<<endl;
                kotakX = 5;
                kotakY = 5;
            }
        }

        for(int i = (kotakX);i<=((kotakX)+2);i++){
            for(int j = (kotakY);j<=((kotakY)+2);j++){
                Node sementara = input.getNode(j,i);
                if(isi==sementara.getIsi()){
                    clog<<"not pass sekunder"<<endl;
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
bool Solver::isDalamSekunder(int row, int col){
    bool diDalam = true;

    //jika menmenuhi ini maka ada di baris dan kolom yang bukan kotak sekunder
    if(row==0||row==4||col==0||col==4||row==8||col==8){
        diDalam = false;
    }

    return diDalam;
}

bool Solver::isEmpty(Board input, int& row, int& col){
    //cari kotak yang kosong(beserta set row dan col yang kosong itu)
	for (row = 0; row < 9; row++){
        for (col = 0; col < 9; col++){
            if (input.getNode(row,col).getIsi() == 0){
                return true;
            }
        }
    }

    return false;
}

bool Solver::solve(){
    return solve(papan);
}

bool Solver::solve(Board& input){
    int row, col;

    // Jika tidak ada lokasi yang kosong
    if (!isEmpty(input, row, col)){
        return true;
    }

    // mencoba menggunakan angka 1-9
    for (int num = 1; num <= 9; num++)
    {
        clog<<"trying = "<<row<<","<<col<<","<<num<<endl;
        if (isSafe(input, row, col, num))
        {
            //jika aman set
            clog<<"safe"<<endl;
            input.getNode(row,col).setIsi(num);
            if (solve(input)){
                clog<<"yes";
                return true;
            }else{
                //jika tidak balikin ke 0 untuk dicari lagi
                input.getNode(row,col).setIsi(0);
            }
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
