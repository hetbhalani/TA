//33. WAP to implement following operation on stack: PUSH, POP, and Display. 

#include <stdio.h>
#define MAX 5 

int stack[MAX], top = -1;

//Push 
void push(int data) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = data;
        printf("%d pushed onto the stack\n", data);
    }
}

// Pop 
void pop() {
    if (top < 0) {
        printf("Stack underflow\n");
    } else {
        printf("%d is popped\n", stack[top]);
        top--;
    }
}

//Display
void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int data, choice;

    while (1) {
        printf("\nEnter:\n 1: Push\n 2: Pop\n 3: Display\n 4: Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Enter a valid choice\n");
        }
    }
}
