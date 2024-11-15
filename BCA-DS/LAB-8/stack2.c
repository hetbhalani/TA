// 35. WAP to implement following operation on stack: PEEP and CHANGE 

#include <stdio.h>
#define MAX 5 

int stack[MAX], top = -1;

// Push 
void push(int data) {
    if(top >= MAX - 1){
        printf("Stack overflow");
    }
    else {
        top++;
        stack[top] = data;
        printf("%d is pushed ", data);
    }
}

// Peep
void peep(int position){
    if(top - position + 1< 0 || position <= 0){
        printf("Invalid position");
    }
    else{
        int i = top - position + 1;
        printf("Element at position %d = %d\n", position, stack[i]);
    }
}

// Change 
void change(int position, int value) {
    if (top - position + 1 < 0 || position <= 0){
        printf("Invalid position");
    }
    else{
        int i = top - position + 1;
        stack[i] = value;
        printf("Element at position %d changed to: %d\n", position, value);
    }
}

// Display 
void display() {
    if (top < 0) {
        printf("Stack is empty");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, data, position;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    while (1) {
        printf("\nEnter:\n 1: Peep\n 2: Change\n 3: Display\n 4: Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position: ");
                scanf("%d", &position);
                peep(position);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &position);
                printf("Enter new value: ");
                scanf("%d", &data);
                change(position, data);
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
