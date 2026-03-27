#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "Node.h"

class LinkedList {
    
    private:
        Node* head;
        Node* tail;
        int length;

    public:

        LinkedList(int value) {
            Node* newNode = new Node(4);

            head = newNode;
            tail = newNode;

            length = 1;
        }

        void append(int value);
        void prepend(int value);
        bool insert(int index, int value);

        Node* get(int index);

        void printList();
        void printHead();
        void printTail();
        void printLength();

};

#endif // LINKED_LIST_H