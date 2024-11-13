//3. WAP to perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.
#include<stdio.h>

void main(){
    printf("enter 1 to Addition\n");
    printf("enter 2 to Subtraction\n");
    printf("enter 3 to Multiplication\n");
    printf("enter 4 to Division\n");

    int n;
    scanf("%d", &n);

    int a,b,result;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    //using if-else

    // if(n == 1){
    //     printf("%d", a+b);
    // }
    // else if(n == 2){
    //     printf("%d", a-b);
    // }
    // else if(n == 3){
    //     printf("%d", a*b);
    // }
    // else if(n == 4){
    //     printf("%.2f", a/b);
    // }
    // else{
    //     printf("Bhai barobar number nakh ne....");
    // }

    //using switch-case

    switch (n) {
        case 1: 
            result = a + b;
            printf("Result: %d", result);
            break;

        case 2: 
            result = a - b;
            printf("Result: %d", result);
            break;

        case 3: 
            result = a * b;
            printf("Result: %d", result);
            break;

        case 4:  
            result = a / b;
            printf("Result: %.2f", result);
            break;

        default:
            printf("Bhai barobar number nakh....");
    }
}