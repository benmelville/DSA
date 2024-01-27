//
// Created by Benjamin Melville on 1/25/24.
//

#include "../include/SinglyLinkedList.h"
#include <iostream>


void SinglyLinkedList::insert(int data) {

    node* newNode = new node;
    newNode->data = data;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        node* temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;

    }
}

void SinglyLinkedList::deleteNode(int data) {

    if (head->data == data)
    {
        delete head;
    }
    else
    {
        node* temp = head;
        node* prev = nullptr;
        while (temp != nullptr)
        {
            if (temp->data == data)
            {
                prev->next = temp->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
}

void SinglyLinkedList::printList() {
    node* temp = head;

    printf("=========== SINGLY LINKED LIST ===========\n");

    while (temp->next != nullptr)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
    printf("=========== END SINGLY LINKED LIST ===========");

}

void SinglyLinkedList::removeFromFront() {
    node* temp = head;
    head = head->next;
    delete temp;
}

void SinglyLinkedList::removeFromBack() {
    if (head == nullptr)
    {
        return;
    }
    if (head->next == nullptr)
    {
        head = nullptr;
        delete head;
        return;

    }
    node* current = head;

    while (current->next->next != nullptr)
    {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}



