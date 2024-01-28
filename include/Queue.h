//
// Created by Benjamin Melville on 1/27/24.
//

#ifndef DSA_QUEUE_H
#define DSA_QUEUE_H


class Queue {

    struct node {
        int data;
        node* next;
    };

    node* head;
    node* tail;

public:

    Queue() {
        head = nullptr;
        tail = nullptr;
    }


    /// Adds data to the back of the queue.
    /// @param data The being added to the queue.
    void enqueue(int data);

    /// Removes and returns the element that has been in the queue the longest.
    int dequeue();

    /// Checks to see if there are any elements left in the queue.
    bool isEmpty();

    /// Clears the queue.
    void clear();


    /// Look at the next element to be removed from the queue.
    int peek();

    /// Print the elements in the queue.
    void printQueue();

    /// Print the next element to be removed from queue.
    void printTop();

};


#endif //DSA_QUEUE_H
