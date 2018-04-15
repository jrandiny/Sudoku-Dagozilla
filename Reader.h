#ifndef READER_H
#define READER_H

#include "Node.h"
#include <vector>

class Reader{
    private:

    public:
        Reader();
        vector< vector<Node> > baca();
        vector< vector<Node> > bacaFile();
};

#endif
