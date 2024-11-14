// WAP to print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.


#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum -= i;  // Subtract if i is even
        } else {
            sum += i;  // Add if i is odd
        }
    }

    printf("%d", sum);
}
