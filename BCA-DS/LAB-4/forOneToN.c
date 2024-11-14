// WAP to print 1 to N numbers. 

#include<stdio.h>

void main(){
    int n;
    
    printf("enter a number : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        printf("%d\n", i);
    }
}