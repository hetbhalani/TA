// 66. WAP to implement merge sort algorithm.

#include <stdio.h>

//Merge
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1; 
    int n2 = right - mid;   

    //temp arrays
    int leftArr[n1], rightArr[n2];

    for(int i = 0; i < n1; i++){
        leftArr[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }
        else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

//for remaining eelements on both sides(if any)
    while(i < n1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void partition(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2; 

        partition(arr, left, mid);

        partition(arr, mid + 1, right);

        //merge the sorted part
        merge(arr, left, mid, right);
    }
}

void main()
{
    int arr[] = {75, 2, 34, 19, 73, 64, 85, 26, 15, 10, 28};
    int size = sizeof(arr) / sizeof(arr[0]);


    partition(arr, 0, size - 1);

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
