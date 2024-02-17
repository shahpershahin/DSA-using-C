#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printLinkedList(struct Node* head){
    while(head != NULL){
        printf("Data is : %d \n",head->data);
        head = head->next;
    }
}

void reverseList(struct Node * head){
    struct Node *prev,*nextnode,*current;
    prev = 0;
    nextnode=current=head;
    while(nextnode != NULL){
        nextnode = nextnode->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    } head = prev;
    printLinkedList(head);
}



int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* tail;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = tail;

    tail->data = 17;
    tail->next = NULL;

    printf("\nLinked List before: \n");
    printLinkedList(head);
    printf("\n\nLinked List after reversal: \n");
    reverseList(head);
}