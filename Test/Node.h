#ifndef NODE_H
#define NODE_H

#include <vector>

using namespace std;
// Pendefenisian kelas dari komponen sudoku
class Node{
    private:
        // vector<int> kemungkinan;
        int isi;

    public:
        Node();
        Node(int isi);

        int getIsi();
        void setIsi(int isi);
        // vector<int> getKemungkinan();
        // void setKemungkinan(vector<int> kemungkinan);


};
#endif
