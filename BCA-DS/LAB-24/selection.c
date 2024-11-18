// 62. WAP to implement selection sort algorithm.

#include <stdio.h>

void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        //find the minimum
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j; 
                //update the index of the min
            }
        }

        // swap with the first element
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void main(){
    int arr[] = {75, 2, 34, 19, 73, 64, 85, 26, 15, 10, 28};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
