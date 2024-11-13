// WAP to print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.

#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1, sum = 0;

    do {
        if(i % 2 == 0){
            sum -= i;  // Subtract if i is even
        } else {
            sum += i;  // Add if i is odd
        }
        i++;
    } while(i <= n);

    printf("%d", sum);
}
