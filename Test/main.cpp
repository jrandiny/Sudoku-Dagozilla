#include "Node.h"
#include "Board.h"
#include "Reader.h"
#include "Solver.h"
#include <iostream>
#include <fstream>

int main(){

	//Kamus
	string jenis_input,manual_input[9];
	char hasil_input[9][9];
	int i,u;



    /*Board board1;
    board1.print();*/




    cout<<"Pilih cara input(Manual/File)?"<<endl;
    cin>>jenis_input;

    //Algoritma input manual
    if(jenis_input=="Manual"){
    	cout<<"Silahkan ketikan masukan anda di bawah ini (1 baris 9 angka tanpa spasi) :"<<endl;
	 	u=0;
   		
   		for(i=0;i<9;i++){
    		cin >> manual_input[i];	
       	}    	

       	for(u=0;u<9;u++){
       		for(i=0;i<9;i++){
       			hasil_input[u][i]=manual_input[u][i];
       			cout<<hasil_input[u][i];
       		}
       	cout<<endl;
        }

    }	

    else if(jenis_input=="File"){

    }
    else{
    	cout<<"Pilihannya hanya Manual dan File"<<endl;
	}


    return 0;
}
