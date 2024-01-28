//
// Created by Benjamin Melville on 1/27/24.
//

#ifndef DSA_STACK_H
#define DSA_STACK_H



class Stack {

    struct node {
        int data;
        node* next;
    };

    node* top;

public:

    Stack() {
        top = nullptr;
    }

    void push(int data);

    void pop();

    int peek();

    bool isEmpty();

    void printStack();

    void printTop();


};


#endif //DSA_STACK_H
