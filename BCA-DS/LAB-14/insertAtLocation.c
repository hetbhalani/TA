//46. WAP to implement following operation on link list: Insert at specified location.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int val, int pos){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    n->data = val;
    
    if(head == NULL){
        return;
    }

    struct Node* temp = head;

    for(int i = 0; i < pos - 1 && temp->next != NULL; i++){
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n; 

}

void insertAtLast(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    n->data = val;
    n->next = NULL;

     if (head == NULL) {
        head = n;
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
    insertAtLast(1);
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(4);
    insertAtLast(5);
    insertAtLast(6);

    insert(3,5);

    display();
}