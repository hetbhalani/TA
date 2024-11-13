//6. WAP to print 1 to N numbers. 

#include<stdio.h>

void main(){
    int n,i=1;
    
    printf("enter a number : ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n", i);
        i++;
    }
}