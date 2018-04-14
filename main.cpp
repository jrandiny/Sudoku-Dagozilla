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
	int i,u,yes=0;

    /*Board board1;
    board1.print();*/

	while(yes==0){
   		cout<<"Pilih cara input(Manual/File)?"<<endl;
    	cin>>jenis_input;

    //Algoritma input manual
    	if(jenis_input=="Manual"){
    		cout<<"Silahkan ketikan masukan anda di bawah ini (1 baris 9 angka tanpa spasi) :"<<endl;
	 		u=0;
   		
   			for(i=0;i<9;i++){
   				cout<<"|";
    			cin >> manual_input[i];	
    			cout<<"|";
       		}    	

       		for(u=0;u<9;u++){
       			for(i=0;i<9;i++){
       				hasil_input[u][i]=manual_input[u][i];
       				cout<<hasil_input[u][i];
       			}
       		cout<<endl;
        	}
        	

        	if(true){
        		for(i=0;i<9;i++){
        			if(manual_input[0].length()!=9){
        			cout<<"Ulangi input !!! (1 baris haya diisi oleh 9 angka antara 1-9 !!)";
        			i=9;
    	    		}	
        		}	
        	}
        	else{
        		yes++;
        	}    	
    	}	

    	/*Board board1(hasil_input);*/


    	else if(jenis_input=="File"){

    		yes++;
    	}
    	else{
    		cout<<"Pilihannya hanya Manual dan File"<<endl;
		}
	}
    return 0;
}
