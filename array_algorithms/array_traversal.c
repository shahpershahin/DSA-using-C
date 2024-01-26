#include <stdio.h>
#include <stdlib.h>

// function to print / traverse the element of the array
void printArray(int arr[], int size){
    printf("\nElements of the array is : \n");
    printf("{ ");
    for(int i=0; i<=size-1;i++){
        printf("%d ", arr[i]);
    }
    printf("}");
}

// main function
int main(){
    int i,size,index,*array;

        printf("Enter the size of the array: ");
        scanf("%d",&size);

    /*  Memory allocates dynamically using malloc() NOTE:to use malloc()
    include <stdlib.h> header file */
    array = (int*)malloc(size * sizeof(int)); 
  
    // Checking for memory allocation done or not 
    if (array == NULL) { 
        printf("Memory not allocated.\n"); 
    } 
    else { 
        // Memory allocated 
        printf("Memory successfully allocated using "
               "malloc.\n"); 

        printf("Enter the elements of the array: \n\n");

        for(int i=0;i<size;i++){
            printf("Enter the %d element of the array: ", i);
            scanf("%d",&array[i]);
        }
    }

    printArray(array,size); //calling the printArray function to print the array elements 
}