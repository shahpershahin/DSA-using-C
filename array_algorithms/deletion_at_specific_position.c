#include <stdio.h>
#include <stdlib.h>

void DeletionAtSpecificPos(int arr[], int size, int index){
    for(int i=index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
}

void printArray(int arr[], int size){
    printf("{ ");
    for(int i=0; i<=size-1;i++){
        printf("%d ", arr[i]);
    }
    printf("}");
}

int main(){
    
    int size,index,choice,*array;

        printf("Enter the size of the array: ");
        scanf("%d",&size);

        //dynamically allocating the size of the array
        array = (int*)malloc(size * sizeof(int)); 

        //array element input
        printf("Enter the elements of the array: \n");
        //loop for input
        for(int i=0;i<size;i++){
            printf("Enter the %d element of the array: ", i);
            scanf("%d",&array[i]);
        }


    printf("\nWant to delete any element? \n-Press 1 for YES \n-Press 0 for NO\n");
    scanf("%d",&choice);

    switch (choice){
        case 0:
            printf("You selected NO, Ending the program");
        case 1:
            printf("Enter the index position of the elements which you want to delete: ");
            scanf("%d", &index);

            // printing the user array
            printf("\nArray of user is: ");
            printArray(array,size);
            printf("\n");

            DeletionAtSpecificPos(array,size,index);
            size-=1;

            printf("\nArray after deletion is: ");
            printArray(array,size);
    }

}