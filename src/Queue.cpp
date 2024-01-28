//
// Created by Benjamin Melville on 1/27/24.
//

#include <cstdio>
#include "Queue.h"



void Queue::enqueue(int data) {

    node* newNode = new node;
    newNode->data = data;

    if (isEmpty())
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;

}


int Queue::dequeue() {

    if (isEmpty())
    {
        return -1;
    }

    node* temp = head;
    int tempVal = temp->data;
    head = head->next;
    delete temp;
    return tempVal;

}


bool Queue::isEmpty() {
    return head == nullptr;
}


int Queue::peek() {
    return head->data;
}

void Queue::printQueue() {

    node* temp = head;
    printf("NEWEST: ");
    while (temp->next)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d :OLDEST\n", temp->data);
}

void Queue::printTop() {
    printf("TOP: %d\n", tail->data);
}