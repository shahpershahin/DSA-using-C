#include <stdio.h>
#define MAX 10

int push(int array[], int data,int size){
    if(size==MAX){
        printf("Overload");
    }else{
        array[size]=data;
        size+=1;
    }
    return size;
}

void printStack(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}


int main(){
    int size,i;
    int stack_array[MAX];
     printf("Enter the size of the array: ");
     scanf("%d",&size);

     printf("Entre the element of the array: ");
     for(i=0;i<size;i++){
        printf("Entet %d element: ",i);
        scanf("%d",&stack_array[i]);
     }

     size = push(stack_array,22,size);
     printStack(stack_array,size);


}