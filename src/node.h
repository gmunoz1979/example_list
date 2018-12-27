#ifndef NODE_H
#define NODE_H

#include <memory>

using namespace std;

class Node {
    public:
        int value;
        shared_ptr<Node> prev;
        shared_ptr<Node> next;

        Node(int value); // constructor #1
        Node(int value, shared_ptr<Node> prev); // constructor #2
        void add(int value, shared_ptr<Node> prev);
        void show();
        void remove(int value);
};

#endif