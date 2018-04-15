#include "Node.h"
#include "Board.h"
#include "Reader.h"
#include "Solver.h"
#include <iostream>

using namespace std;

int main(){
	string jenis_input;
	Reader read;
	Board papan;

	cout<<"Program Menyelesaikan Hyper Sudoku"<<endl<<"----------------------------------"<<endl<<endl;

	while(true){
		cout<<"Pilih cara input(Manual/File)?"<<endl;
		cout<<"Pilihan Anda : ";
		cin>>jenis_input;


		//ubah ke lowercase
		for(int i = 0;i<jenis_input.length();i++){
			jenis_input[i]=tolower(jenis_input[i]);
		}

		//Algoritma input manual dan cek per baris kalo kelebihan input ngulang input baris tersebut
		if(jenis_input=="manual"){
			cout<<"Silahkan ketikan masukan anda di bawah ini (1 baris 9 angka tanpa spasi) :"<<endl;
			//Board papan(read.baca());
			papan.setBoard(read.baca());
			break;

		}else if(jenis_input=="file"){

			cout<<"Nama File : ";
			string namaFile;
			cin>>namaFile;

			papan.setBoard(read.bacaFile(namaFile));
			break;
		}
		else{
			cout<<"Pilihannya hanya Manual dan File"<<endl;
			cout<<endl;
		}
	}

	cout<<endl<<"Ini masukkan Anda"<<endl;
	papan.print();

	cout<<"Mencoba menyelesaikan"<<endl;

	Solver solverr(papan);
	if(solverr.solve()){
		cout<<"SELESAI"<<endl;
	}else{
		cout<<"GAGAL"<<endl;
	}

	solverr.getBoard().print();

	while(true){
		cout<<"Ingin simpan hasil ke file ?(y/n)"<<endl;
		char input;
		cin>>input;

		if(tolower(input)=='y'){
			string namaFile;
			cout<<"Nama file : ";
			cin>>namaFile;

			solverr.getBoard().printSave(namaFile);
			break;
		}else if(tolower(input)=='n'){
			break;
		}
		cout<<"Input tidak valid"<<endl;
	}



	return 0;
}
