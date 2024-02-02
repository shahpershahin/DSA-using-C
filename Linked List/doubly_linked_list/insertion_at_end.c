#include <stdio.h>
#include <stdlib.h>


struct DoubNode{
int data;
struct DoubNode* prev;
struct DoubNode* next;
};

struct DoubNode* printfLinkedList(struct DoubNode* head){
    while(head != NULL){
        printf("Data is: %d\n", head->data);
        head = head->next;
    }
}

struct DoubNode* insertAtEnd(struct DoubNode* head,int data){
    struct DoubNode* new = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    struct DoubNode* temp = (struct DoubNode*)malloc(sizeof(struct DoubNode));

    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next= new;
    new->prev = temp;
    new->data = data;
    new->next = NULL;

    return head;
}

int main (){

    struct DoubNode* head;
    struct DoubNode* second;
    struct DoubNode* third;
    struct DoubNode* fourth;
    struct DoubNode* tail;

    head = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    second = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    third = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    fourth = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    tail = (struct DoubNode*)malloc(sizeof(struct DoubNode));

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

    printf("List before insertion: \n");
    printfLinkedList(head);

    head = insertAtEnd(head,55);

    printf("\nList after insertion: \n\n");
    printfLinkedList(head);



}
