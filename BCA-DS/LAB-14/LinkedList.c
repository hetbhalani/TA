//45. WAP to implement following operation on link list: Insert at first, Insert at last, and Display.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtFirst(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    n->data = val;
    n->next = head;
    head = n;
    printf("%d insert first\n",val);
}

void insertAtLast(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    n->data = val;
    n->next = NULL;

    if(head == NULL){
        printf("ll is empty");
        return;
    }

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    printf("%d insert last\n",val);

}

void display(){
    if(head == NULL){
        printf("ll is empty");
        return;
    }

    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main(){
    insertAtFirst(10);
    insertAtFirst(20);
    
    display();
    
    insertAtLast(30);
    insertAtLast(40);
    
    display();
    
    insertAtFirst(50);
    
    display();
}