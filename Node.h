#ifndef NODE_H
#define NODE_H

#include <vector>

using namespace std;
// Pendefenisian kelas dari komponen sudoku
class Node{
    private:
        int isi;

    public:
        Node();
        Node(int isi);

        int getIsi();
        void setIsi(int isi);

};
#endif
