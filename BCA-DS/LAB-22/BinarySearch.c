#include<stdio.h>
#include<stdlib.h>

int main(){
    int a [] = {0,1,2,3,4,5,6,7,8,9};
    int n;

    printf("enter element to search: ");
    scanf("%d",&n);

    int low = 0, high = sizeof(a) / sizeof(a[0]);

    while(low <= high){
        int mid = (low+high)/2;

        if(a[mid] == n){
            printf("element found at %d",mid);
            return 0;
        }
        
        if(a[mid] > n){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        
    }
    return -1;
}