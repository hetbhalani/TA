// WAP to print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.


#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i * i <= n; i++){
        sum += i * i; //do square and add to sum
    }

    printf("%d", sum);
}
