#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binarySearch(int array[],int size,int value){
    int mid,lb,ub;
    lb=0;
    ub=size-1;

    mid = (lb+ub)/2;
    mid = floor(mid);

    while(lb<ub){
        if(array[mid] == value){
            // printf("%d is at %d",array[mid],mid);
            return mid;
        }else if(value>array[mid]){
            lb = mid+1;
            mid = (lb+ub)/2;
            mid = floor(mid);
            
        }else{
            ub = mid-1;
            mid = (lb+ub)/2;
            mid = floor(mid);
        }
    }
    return mid;
}

int main(){

    int size,i;

    int arr[]= {1,2,3,4,6,7,8,9};

    size = sizeof(arr)/sizeof(arr[0]);

    int res = binarySearch(arr,size,8);
    printf("%d",res);

    return 0;
}