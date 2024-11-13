//2. WAP to find out largest number from given three numbers. 

#include<stdio.h>

void main(){
    int num1, num2, num3;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("largest number: %d", num1);
        } else {
            printf("largest number: %d", num3);
        }
    } else {
        if (num2 > num3) {
            printf("largest number: %d", num2);
        } else {
            printf("largest number: %d", num3);
        }
    }
}