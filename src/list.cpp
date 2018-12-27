#include "list.h"

// Constructor #1
List::List(int value) {
    this->root = make_shared<Node>(value);
}

void List::add(int value) {
    this->root->add(value, this->root);
}

void List::remove(int value) {
    if (this->root->value == value) {
        this->root = this->root->next;
        this->root->prev = nullptr;
        return;
    }
    this->root->remove(value);
}

void List::show() {
    this->root->show();
}