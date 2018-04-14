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
	char hasil_input[9][9],final[9][9];
	int i,u,e;

    /*Board board1;
    board1.print();*/

    cout<<"Program Menyelesaikan Hyper Sudoku"<<endl<<"----------------------------------"<<endl<<endl;

	while(true){
   		cout<<"Pilih cara input(Manual/File)?"<<endl;
    	cin>>jenis_input;

    //Algoritma input manual dan cek per baris kalo kelebihan input ngulang input baris tersebut
    	if(jenis_input=="Manual"){
    		cout<<"Silahkan ketikan masukan anda di bawah ini (1 baris 9 angka atau x tanpa spasi) :"<<endl;
	 		 		
 				for(i=0;i<9;i++){
 					cin >> manual_input[i];
 					for(u=0;u<9;u++){
   	    				//Algoritma cek baris
        				if(manual_input[i].length()!=9){
        					cout<<"Ulangi input baris "<<i+1<<" !!! (1 baris haya diisi oleh 9 angka antara 1-9 !!)"<<endl;
       	    				for(e=0;e<i;e++){
        						cout<<manual_input[e]<<endl;
           					}
       	    				i--;
       	    				u=9;
       	    			}
       	    			else{
       	    				hasil_input[i][u]=manual_input[i][u];
        	    			}	
       	    		}	
        		}	

        		for(i=0;i<9;i++){
        			for(u=0;u<9;u++){
           			}
        			cout<<endl;
        		}
        		cout<<endl;

    	//Algoritma ngubah x jadi 0
    	for(i=0;i<9;i++){
    		for(u=0;u<9;u++){
    			if(hasil_input[i][u]=='x'){
    				final[i][u]=0;
    			}
    			else{
    				final[i][u]=hasil_input[i][u];
    			}
    			cout<<final[i][u];
    		}
    		cout<<endl;
    	}
    	break;			
		
    	}	


    	/*Board board1(hasil_input);*/

    	else if(jenis_input=="File"){

    		break;
    	}
    	else{
    		cout<<"Pilihannya hanya Manual dan File"<<endl;
		}
	}
    return 0;
}
