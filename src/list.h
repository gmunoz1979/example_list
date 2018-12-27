#ifndef LIST_H
#define LIST_H

#include <memory>
#include "node.h"

using namespace std;

class List {
    public:
        shared_ptr<Node> root;

        List(int value); // constructor #1
        void add(int value);
        void show();
        void remove(int value);
};

#endif