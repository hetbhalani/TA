//11. WAP to print sum of series 1+1/2+1/3+1/4+⋯+1/n. 

#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   int i = 1, sum = 0;

    while(i <= n){
        sum += 1/i; 
        i++;
    }

    printf("%d", sum);
}
