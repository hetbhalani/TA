//9. WAP to print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.

#include<stdio.h>

void main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int i = 1,sum = 0;

    while(i*i<=n){
        sum = sum + i*i; //do squre and add to sum
        i++; 
    }
    printf("%d", sum);
}