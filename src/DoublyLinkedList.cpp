//
// Created by Benjamin Melville on 1/27/24.
//

#include <cstdio>
#include "DoublyLinkedList.h"


void DoublyLinkedList::addToBack(int data) {
    node* newNode = new node{data, nullptr, nullptr};

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void DoublyLinkedList::addToFront(int data) {

    node* newNode = new node {data, nullptr, nullptr};

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void DoublyLinkedList::removeFromBack() {

    if (head == nullptr)
    {
        return;
    }

    if (head->next == nullptr)
    {
        head = nullptr;
        tail = nullptr;
        delete head;
        delete tail;
        return;
    }

    tail->prev->next = nullptr;
    node* temp = tail;
    tail = tail->prev;
    temp = nullptr;
    delete temp;

}

void DoublyLinkedList::printList() {

    node* temp = head;

    while(temp->next != nullptr)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("%d\n", temp->data);
}

void DoublyLinkedList::printHead() {
    printf("HEAD: %d\n", head->data);
}

void DoublyLinkedList::printTail() {
    printf("TAIL: %d\n", tail->data);
}
