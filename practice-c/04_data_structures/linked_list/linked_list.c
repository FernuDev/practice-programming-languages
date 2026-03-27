#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} node_t;

typedef node_t* ListNode;

void append(ListNode *head, int value) {

    ListNode new = malloc(sizeof(node_t));
    new->value = value;
    new->next = NULL;

    if(*head == NULL){
        *head = new;
        return;
    }
    
    ListNode current = *head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = new;
}

void prepend(ListNode *head, int value) {

    ListNode new = malloc(sizeof(node_t));
    new->value = value;
    new->next = *head;
    *head = new;
}

void printList(ListNode head){
    while(head != NULL){
        printf("%d ", head->value);
        head = head->next;
    }
}