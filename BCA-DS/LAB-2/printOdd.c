//7. WAP to print odd numbers between 1 to N.

#include<stdio.h>

void main(){
    int n,i=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=n){
        if(i%2 != 0){
            printf("%d\n", i);
        }
        i++;
    }
}