#include <stdio.h>
#include <stdlib.h>

struct DoubNode{
    struct DoubNode* prev;
    int data;
    struct DoubNode* next;
};

struct DoubNode* printLinkedList(struct DoubNode* head){
    while(head != NULL){
        printf("Data is %d \n",head->data);
        head = head->next;
    }
}


struct DoubNode* insertAtIndex(struct DoubNode* head, int data,int index){
    struct DoubNode* temp = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    struct DoubNode* new = (struct DoubNode*)malloc(sizeof(struct DoubNode));
    temp = head->next;
    for(int i =1; i<index;i++){
        head = head->next;
        temp = temp->next;
    }
    head->next = new;
    new->prev = head;
    new->data = data;
    new->next = temp;
    temp->prev = new;

    return head;
}


int main(){

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
    
    printf("\nList before insertion: \n");
    printLinkedList(head);

    insertAtIndex(head, 55, 2);

    printf("\nList after insertion: \n");
    printLinkedList(head);

    return 0;
}