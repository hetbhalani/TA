#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtLast(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    n->data = val;
    n->next = NULL;

    if (head == NULL) {
        head = n;
        printf("%d inserted at last\n", val);
        return;
    }

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    printf("%d inserted at last\n", val);
}

void display(){
    if(head == NULL){
        printf("ll is empty\n");
        return;
    }

    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void countNodes(){
    if(head == NULL){
        printf("0");
        return;
    }

    int cnt = 0;

    struct Node* temp = head;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    printf("there are %d nodes", cnt);
}

void main(){
    insertAtLast(1);
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(4);
    insertAtLast(5);
    insertAtLast(6);

    countNodes();
}