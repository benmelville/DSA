#include <iostream>
#include "../include/SinglyLinkedList.h"
#include "../include/DoublyLinkedList.h"
#include "../include/Stack.h"
#include "../include/Queue.h"

int main() {
    // SINGLY LINKED LIST BEGIN
    printf("=========== SINGLY LINKED LIST ===========\n");
    SinglyLinkedList list;
    list.insert(1);
    list.insert(3);
    list.insert(4);
    list.insert(67);
    list.insert(23);
    list.insert(45);
    list.insert(12);
    list.deleteNode(13);
    list.removeFromFront();
    list.removeFromBack();
    list.printList();
    list.printHead();
    printf("=========== END SINGLY LINKED LIST ===========\n\n");
    // SINGLY LINKED LIST END

    // DOUBLY LINKED LIST BEGIN
    printf("=========== DOUBLY LINKED LIST ===========\n");
    DoublyLinkedList doublyLinkedList;
    doublyLinkedList.addToBack(4);
    doublyLinkedList.addToBack(23);
    doublyLinkedList.addToBack(16);
    doublyLinkedList.addToBack(48);
    doublyLinkedList.addToBack(90);
    doublyLinkedList.printList();
    doublyLinkedList.addToFront(943);
    doublyLinkedList.addToFront(4567);
    doublyLinkedList.addToFront(1234);
    doublyLinkedList.addToFront(485);
    doublyLinkedList.printList();
    doublyLinkedList.removeFromBack();
    doublyLinkedList.removeFromBack();
    doublyLinkedList.removeFromBack();
    doublyLinkedList.printList();
    doublyLinkedList.printHead();
    doublyLinkedList.printTail();
    printf("=========== DOUBLY LINKED LIST END ===========\n\n");
    // DOUBLY LINKED LIST END

    // STACK BEGIN
    printf("=========== STACK BEGIN ===========\n");
    Stack stack;
    stack.push(2);
    stack.push(12);
    stack.push(865);
    stack.push(67);
    stack.printStack();
    stack.pop();
    stack.pop();
    stack.printStack();
    stack.printTop();
    printf("=========== STACK END ===========\n\n");
    // STACK END

    // QUEUE BEGIN
    printf("=========== QUEUE BEGIN ===========\n");
    Queue queue;
    queue.enqueue(8);
    queue.enqueue(45);
    queue.enqueue(89);
    queue.enqueue(3456);
    queue.enqueue(4568);
    queue.enqueue(74);
    queue.printQueue();
    queue.printTop();
    printf("=========== QUEUE END ===========\n");
    // QUEUE END


    return 0;
}
