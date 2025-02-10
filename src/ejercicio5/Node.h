#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node {
public:
    int value;
    int priority;
    Node* next;

    Node(int value, int priority) {
        this->value = value;
        this->priority = priority;
        next = nullptr;
    }
};

#endif // NODE_H
