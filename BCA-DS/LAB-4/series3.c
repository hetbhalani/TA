// WAP to print sum of series 1+1/2+1/3+1/4+⋯+1/n. 

#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += 1/i; 
    }

    printf("%d", sum);
}
