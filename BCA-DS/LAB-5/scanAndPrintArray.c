//26. WAP to read n numbers in an array and print them.

#include<stdio.h>

void main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i<n; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<n; i++){
        printf("%d\n",a[i]);
    }

}