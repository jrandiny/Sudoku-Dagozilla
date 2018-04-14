#include "Node.h"
#include "Board.h"
#include "Reader.h"
#include "Solver.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

	//Kamus
	string jenis_input,manual_input[9];
	char hasil_input[9][9];
	int i,u,e,yes=0;

    /*Board board1;
    board1.print();*/
    Reader read;

    cout<<"Program Menyelesaikan Hyper Sudoku"<<endl<<"----------------------------------"<<endl<<endl;

	while(true){
   		cout<<"Pilih cara input(Manual/File)?"<<endl;
    	cin>>jenis_input;

    //Algoritma input manual dan cek per baris kalo kelebihan input ngulang input baris tersebut
    	if(jenis_input=="Manual"){
    		cout<<"Silahkan ketikan masukan anda di bawah ini (1 baris 9 angka tanpa spasi) :"<<endl;
            read.baca();
    		break;

    	}else if(jenis_input=="File"){

    		break;
    	}
    	else{
    		cout<<"Pilihannya hanya Manual dan File"<<endl;
		}
	}
    
    return 0;
}
