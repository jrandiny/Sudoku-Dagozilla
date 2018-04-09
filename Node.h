#ifndef NODE_H
#define NODE_H

#include <vector>

using namespace std;

class Node{
    private:
        vector<int> kemungkinan;
        int isi;

    public:
        Node();
        Node(int isi);

        int getIsi();
        vector<int> getKemungkinan();
        void setKemungkinan(vector<int> kemungkinan);


};
#endif
