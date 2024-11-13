// WAP to print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.

#include<stdio.h>

void main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int i = 1, sum = 0;

    do {
        sum = sum + i*i; //do square and add to sum
        i++;
    } while(i*i <= n);
    
    printf("%d", sum);
}
