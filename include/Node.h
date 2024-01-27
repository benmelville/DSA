//
// Created by Benjamin Melville on 1/25/24.
//

#ifndef DSA_NODE_H
#define DSA_NODE_H


class Node {
public:

    int data;
    Node* next;

    Node () {
        data = 0;
        next = nullptr;
    }

    Node (int data) {
        this->data = data;
        this->next = nullptr;
    }
};


#endif //DSA_NODE_H
