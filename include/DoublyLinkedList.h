//
// Created by Benjamin Melville on 1/27/24.
//

#ifndef DSA_DOUBLYLINKEDLIST_H
#define DSA_DOUBLYLINKEDLIST_H




class DoublyLinkedList {

    struct node {
        int data;
        node* next;
        node* prev;
    };

    node* head;
    node* tail;

public:

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void addToFront(int data);

    void addToBack(int data);

    void removeFromBack();

    void printList();

    void printHead();

    void printTail();
};


#endif //DSA_DOUBLYLINKEDLIST_H
