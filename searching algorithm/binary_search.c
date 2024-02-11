#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[],int low, int high,int value){

    while(low<=high){

        int mid = low+(high-low)/2;

        if(array[mid] == value){
            return mid;
        }else if(value>array[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){

    int size,i,*array,value;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    array = (int*)malloc(size*sizeof(int));

    if (array == NULL) { // checking memory allocation of the array
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

    printf("Enter the element to find in the array: ");
    scanf("%d",&value);

    int res = binarySearch(array,array[0],array[size-1],value);

    if(res==-1){
        printf("Element not found in array");
    }else{
        printf("%d is at index %d",value,res);
    }

    return 0;
}