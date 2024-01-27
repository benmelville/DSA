#include <iostream>
#include "../include/SinglyLinkedList.h"
#include "../include/DoublyLinkedList.h"

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
    printf("=========== END SINGLY LINKED LIST ===========\n");
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
    printf("=========== DOUBLY LINKED LIST END ===========\n");







    // DOUBLY LINKED LIST END

    return 0;
}
