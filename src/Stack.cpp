//
// Created by Benjamin Melville on 1/27/24.
//

#include <cstdio>
#include "Stack.h"


void Stack::push(int data) {
    node* newNode = new node;
    newNode->data = data;

    if (isEmpty())
    {
        top = newNode;
        return;
    }

    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (isEmpty())
    {
        return;
    }

    if (top->next == nullptr)
    {
        top = nullptr;
        delete top;
        return;
    }

    node* temp = top;
    top = top->next;
    delete temp;

}


int Stack::peek() {
    if (isEmpty())
    {
        return -1;
    }

    return top->data;
}

bool Stack::isEmpty()
{
    return top == nullptr;
}

void Stack::printStack() {
    node *temp = top;
    while (temp->next != nullptr) {
        printf("%d\n", temp->data);
        printf("|\n");
        printf("v\n");

        temp = temp->next;

    }
    printf("%d\n\n", temp->data);
}

void Stack::printTop() {
    printf("TOP: %d\n", top->data);
}