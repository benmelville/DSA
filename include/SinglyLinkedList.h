//
// Created by Benjamin Melville on 1/25/24.
//

#ifndef DSA_SINGLYLINKEDLIST_H
#define DSA_SINGLYLINKEDLIST_H

#include "Node.h"



class SinglyLinkedList {
    Node* head;

public:

    SinglyLinkedList() {
        head = nullptr;
    }

    void insert(int);

    void printList();

    void deleteNode(int);

    void removeFromFront();

    void removeFromBack();
};


#endif //DSA_SINGLYLINKEDLIST_H
