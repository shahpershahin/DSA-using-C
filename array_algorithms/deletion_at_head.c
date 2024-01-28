#include <stdio.h>
#include <stdlib.h>

void printArray(int array[],int size){
    printf("{ ");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("}");
}

int deleteAtHead(int array[],int size){
    for(int i=0;i<size;i++){
        array[i]=array[i+1]; 
    }
    size--; //once the head of array is deleted the size of array will shrink by -1;
    return size; // return size to update when printing the array again
}

int main(){

    int size,*array,i;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    //dynamically allocating head memory to array
    array = (int *)malloc(size* sizeof(int));

    printf("Enter the elements of the array \n");

    for(i=0;i<size;i++){
        printf("Enter %dth element: ",i);
        scanf("%d",&array[i]);
    }

    printf("Array before deletion: ");
    printArray(array,size);

    size = deleteAtHead(array,size); //updating the size of the array after the deleteAtHead function runs

    printf("\nArray after deletion: ");   
    printArray(array, size);

    return 0;
}