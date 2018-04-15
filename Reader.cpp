#include "Reader.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

Reader::Reader(){

}

vector< vector<Node> > Reader::baca(){
    string manual_input[9];
    char hasil_input[9][9];
    vector<vector<Node> > output;

    for(int i=0;i<9;i++){
        cin >> manual_input[i];
        for(int u=0;u<9;u++){
            //Algoritma cek baris
            if(manual_input[i].length()!=9){
                cout<<"Ulangi input baris "<<i+1<<" !!! (1 baris haya diisi oleh 9 angka antara 1-9 !!)"<<endl;
                for(int e=0;e<i;e++){
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

    for(int i=0;i<9;i++){
        for(int u=0;u<9;u++){
            clog<<hasil_input[i][u];
        }
        clog<<endl;
    }
    clog<<endl;
    clog<<"entering conversion"<<endl;

    output.resize(9);

    for(int i=0;i<9;i++){
        output[i].resize(9);
        for(int u=0;u<9;u++){
            clog<<"trying to process : "<<hasil_input[i][u]<<endl;;
            if((hasil_input[i][u]=='X')||(hasil_input[i][u]=='x')){
                output[i][u] = Node(0);
            }
            else{
                output[i][u] = Node(hasil_input[i][u]-'0');
            }
            clog<<output[i][u].getIsi()<<endl;
        }
    }

    return output;

}

vector< vector<Node> > Reader::bacaFile(){
  int baris,kolom;
  char x;
  int** a;
  vector<vector<Node> > output;




  baris = 9; kolom = 9;
  ifstream baca;
  baca.open("data.txt");


  a = new int*[baris];
  for(int j = 0;j<baris;j++){
    a[j] = new int[kolom];
  }


  for(int j=0;j<kolom;j++){
    for(int i=0;i<baris;i++){
    baca>>x;
    switch (x) {
      case 'x' :
        a[i][j] = 0;
        break;
      case '1' :
        a[i][j] = 1;
        break;
      case '2' :
        a[i][j] = 2;
        break;
      case '3' :
        a[i][j] = 3;
        break;
      case '4' :
        a[i][j] = 4;
        break;
      case '5' :
        a[i][j] = 5;
        break;
      case '6' :
        a[i][j] = 6;
        break;
      case '7' :
        a[i][j] = 7;
        break;
      case '8' :
        a[i][j] = 8;
        break;
      case '9' :
        a[i][j] = 9;
        break;

    }
    cout<<a[i][j];
    //cout<<x;
    }
    cout<<endl;
    }

    output.resize(9);

    for(int i=0;i<9;i++){
        output[i].resize(9);
        for(int u=0;u<9;u++){
            clog<<"trying to process : "<<a[i][u]<<endl;;
            if((a[i][u]==0)||(a[i][u]==0)){
                output[i][u] = Node(0);
            }
            else{
                output[i][u] = Node(a[i][u]);
            }
            clog<<output[i][u].getIsi()<<endl;
        }
    }


    return output;

}
