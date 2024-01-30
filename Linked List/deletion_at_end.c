#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* printfLinkedList(struct Node*head){
    while(head != NULL){
        printf("data is : %d\n", head->data);
        head = head->next;
    }
}

struct Node* deleteAtEnd(struct Node*head){
    struct Node*temp1 = head;
    struct Node*temp2 = head->next;

    while(temp2->next !=  NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    temp1->next = NULL;

    free(temp2);
    return head;
}

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* tail;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    tail = (struct Node *)malloc(sizeof(struct Node));


    head->data=7;
    head->next=second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = tail;

    tail->data = 15;
    tail->next = NULL;

    printfLinkedList(head);

    head = deleteAtEnd(head);

    printf("\nList after deletion is: \n");

    printfLinkedList(head);


}