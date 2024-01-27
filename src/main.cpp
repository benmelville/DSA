#include <iostream>
#include "../include/SinglyLinkedList.h"

int main() {
    SinglyLinkedList list;
    list.insert(1);
    list.insert(3);
    list.insert(4);
    list.insert(67);
    list.deleteNode(13);
//    list.removeFromFront();
//    list.removeFromBack();
//    list.removeFromBack();
//    list.removeFromBack();
    list.removeFromBack();
    list.printList();

    return 0;
}
