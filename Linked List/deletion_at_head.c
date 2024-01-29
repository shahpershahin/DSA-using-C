#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


void PrintfLinkedList(struct Node* head ){
    while(head!=NULL){
        printf("Data is: %d \n",head->data);
        head= head->next;
    }
}

struct Node* delete_head(struct Node* head){

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp = head;

    head = head->next;

    free(temp);

    return head;

}


struct Node* deleteAtIndex(struct Node* head, int index){
    struct Node* temp1 = head;
    struct Node* temp2 = head->next;

    for(int i=0;i < index-1; i++){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    temp1->next=temp2->next;

    free(temp2);

    return head;
    
}


int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* tail;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = tail;

    tail->data = 15;
    tail->next = NULL;

    PrintfLinkedList(head);
    // head = delete_head(head);
    head = deleteAtIndex(head, 2);
    printf("\nAfter deletion list is : \n");
    PrintfLinkedList(head);

    return 0;
}