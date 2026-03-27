#include "../headers/LinkedList.h"

void LinkedList::append(int value){
    Node* newNode = new Node(value);

    if (length == 0) {
        head = newNode;
    } else {
        tail->next = newNode;
    }

    tail = newNode;
    length++;
}

void LinkedList::prepend(int value) {
    Node* newNode = new Node(value);

    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }

    length++;
}

Node* LinkedList::get(int index) {
    if (index > length || index < 0) return nullptr;
    Node* temp = head;
    for(int i=0;i<index;i++){
        temp = temp->next;
    }
    return temp;
}

bool LinkedList::insert(int index, int value) {
    if (index > length || index < 0) return false;
    
    if (index == 0){
        prepend(value);
        return true;
    }
    if (index == length){
        append(value);
        return true;
    }

    Node* temp = get(index - 1);
    Node* newNode = new Node(value);

    // Aplicamos la inserción
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
    
    return true;
}

void LinkedList::printList(){
    Node* temp = head;

    std::cout << "List: < ";
    while(temp) {
        if (temp->next != nullptr) {
            std::cout << temp->value << ", ";
        } else {
            std::cout << temp->value << " ";
        }
        temp = temp->next;
    }
    std::cout << ">" << std::endl;
}