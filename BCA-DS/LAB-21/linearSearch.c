// WAP to implement linear search algorithm. 

#include<stdio.h>

void main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a [n];

    for(int i = 0; i<n; i++){
        printf("enter element at %d: ", i);
        scanf("%d", &a[i]);
    }
    
    int s;

    printf("Enter element to search: ");
    scanf("%d", &s);

    int res = LinearSearch(s,n,a);

    if(res == -1){
        printf("Element Not Found");
    }
    else{
        printf("Element found at %d", res);
    }
}

int LinearSearch(int s, int n, int a[]){
    for(int i = 0; i<n; i++){
        if(a[i] == s){
            return i;
        }
    }
    return -1;
}