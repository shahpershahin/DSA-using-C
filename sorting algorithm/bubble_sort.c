#include <stdio.h>
#include <stdlib.h>

void printArray(int array[],int size){
    printf("{ ");
    for(int i=0;i<size;i++){
        if(i<size-1){
            printf("%d, ",array[i]);
        }else{
            printf("%d ",array[i]);
        }
    }
    printf("}");
}

int bubbleSort(int array[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp  = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printArray(array,size);

    return 0;
}

int main(){
    int size,*array,i;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    array = (int*)malloc(size * sizeof(int));

    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++){
        printf("Enter the %d element of the array: ",i);
        scanf("%d",&array[i]);
    }

    printArray(array,size);
    bubbleSort(array,size);
}