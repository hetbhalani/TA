// WAP to print odd numbers between 1 to N.

#include<stdio.h>

void main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1;i<=n; i++){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }
}