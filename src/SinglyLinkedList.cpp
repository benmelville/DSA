//
// Created by Benjamin Melville on 1/25/24.
//

#include "../include/SinglyLinkedList.h"
#include <iostream>

void SinglyLinkedList::insert(int data) {

    Node * newNode = new Node(data);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

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
        Node* temp = head;
        Node* prev = nullptr;
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
    Node* temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

void SinglyLinkedList::removeFromFront() {
    Node* temp = head;
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
    Node* current = head;

    while (current->next->next != nullptr)
    {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}



