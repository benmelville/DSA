//
// Created by Benjamin Melville on 1/25/24.
//

#ifndef DSA_SINGLYLINKEDLIST_H
#define DSA_SINGLYLINKEDLIST_H






class SinglyLinkedList {

    struct node {
        int data;
        node* next;
    };

    node* head;

public:

    SinglyLinkedList() {
        head = nullptr;
    }

    void insert(int data);

    void deleteNode(int);

    void removeFromFront();

    void removeFromBack();

    void printList();

    void printHead();
};


#endif //DSA_SINGLYLINKEDLIST_H
