#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;

};

struct Node* printLinkedList(struct Node*head){
    while(head != NULL){
        printf("data is : %d\n", head->data);
        head = head->next;
    }
}

struct Node* printfLinkedList(struct Node* head){
    while(head!=NULL){
        printf("data is: %d",head->data);
        head = head->next;
    }
}
struct Node* insertAtHead(struct Node* head, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp ->prev = NULL;
    temp->data = data;
    temp->next = head;

    head->prev = temp;

    return temp;
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

    head->prev = NULL;
    head->data=7;
    head->next=second;

    second->prev = head;
    second->data = 11;
    second->next = third;

    third->prev = second;
    third->data = 13;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 15;
    fourth->next = tail;

    tail->prev = fourth;
    tail->data = 17;
    tail->next = NULL;

    printLinkedList(head);

    head = insertAtHead(head,5);

    printf("\nList after insertion is: \n");
    printLinkedList(head);
}