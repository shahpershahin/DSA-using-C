#include <stdio.h>
# define MAX 10

int pop(int stackArray[],int size){
    if(size == 0){
        printf("Underflow");
    }else{
        size-=1;
    }
    return size;
}

int change(int array, int size,int pos){
    for(int i=0;i<pos;i++){
        
    }
}

void printStack(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}

int main(){

    int size,stackArray[MAX],i;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    printf("Enter the element of the array: \n");
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i);
        scanf("%d",&stackArray[i]);
    }

    printf("\nStack before pop: \n");
    printStack(stackArray,size);

    size  = pop(stackArray,size);

    printf("\n\nStack before pop: \n");
    printStack(stackArray, size);

}
