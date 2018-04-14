#include "Node.h"
#include <vector>

using namespace std;

Node::Node(){
    isi = 0;
}

Node::Node(int isi){
    this->isi = isi;
}

int Node::getIsi(){
    return isi;
}

void Node::setIsi(int isi){
    this->isi = isi;
}
