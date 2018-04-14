#include "Node.h"
#include "Board.h"
#include "Reader.h"
// #include "Solver.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	/*Board board1;
	board1.print();*/

	string jenis_input;
	Reader read;
	Board papan;

	cout<<"Program Menyelesaikan Hyper Sudoku"<<endl<<"----------------------------------"<<endl<<endl;

	while(true){
		cout<<"Pilih cara input(Manual/File)?"<<endl;
		cin>>jenis_input;

		//Algoritma input manual dan cek per baris kalo kelebihan input ngulang input baris tersebut
		if(jenis_input=="Manual"){
			cout<<"Silahkan ketikan masukan anda di bawah ini (1 baris 9 angka tanpa spasi) :"<<endl;
			Board papan(read.baca());
			papan.print();

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
