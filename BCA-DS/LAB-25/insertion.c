// 64. WAP to implement insertion sort algorithm.

#include <stdio.h>

void insertionSort(int arr[], int size) {

    for (int i = 1; i < size; i++) {
        int key = arr[i];  
        int j = i - 1;

        //move elements that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

void main() {
    int arr[] = {75, 2, 34, 19, 73, 64, 85, 26, 15, 10, 28};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
