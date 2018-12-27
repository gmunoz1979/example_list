#include <iostream>
#include <memory>
#include "node.h"

using namespace std;

Node::Node(int value) {
    this->value = value;

    this->prev = nullptr;
    this->next = nullptr;
}

Node::Node(int value, shared_ptr<Node> prev) {
    this->value = value;

    this->prev = prev;
    this->next = nullptr;
}

void Node::add(int value, shared_ptr<Node> prev) {

    if (this->next) {
        this->next->add(value, this->next);
        return;
    }

    this->next = make_shared<Node>(value, prev);
}

void Node::remove(int value) {
    if (this->value != value) {
        this->next->remove(value);
        return;
    }

    if (this->next) {
        if (this->prev) {
            this->prev->next = this->next;
            this->next->prev = this->prev;
        }
    } else {
        this->prev->next = nullptr;
    }
}

void Node::show() {
    cout << "Valor: " << this->value << " Anterior: " << (this->prev ? this->prev->value : -1) << endl;

    if (this->next) {
        this->next->show();
    }
}