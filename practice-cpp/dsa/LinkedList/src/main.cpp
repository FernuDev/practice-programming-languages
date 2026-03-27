#include <iostream>
#include "../headers/LinkedList.h"

using namespace std;

int main(int argc, char **argv) {

    cout << "\n\tImplementación de LinkedList en C++:\n" << endl;

    LinkedList* linkedList = new LinkedList(4);

    linkedList->append(5);
    linkedList->append(6);

    linkedList->prepend(10);
    linkedList->prepend(20);

    linkedList->insert(1, 100);

    cout << "\t";
    linkedList->printList();

    cout << "\n";
    return EXIT_SUCCESS;
}
