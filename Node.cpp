#include "Node.h"
#include <vector>

using namespace std;

Node::Node(){
    isi = -1;
    kemungkinan = {1,2,3,4,5,6,7,8,9};
}

Node::Node(int isi){
    this->isi = isi;
    kemungkinan = {};
}

void Node::calculate(){
    
}
