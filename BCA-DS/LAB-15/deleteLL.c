// 48. WAP to implement following operation on link list: Delete from first, Delete from last. 

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void deleteFirst(){
    if(head == NULL){
        return;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
    printf("Deleted\n");
}

void deleteLast(){
    if(head == NULL){
        return;
    }

    //free head if there is only one node
    if(head->next == NULL){
        free(head);
        head == NULL;
        return;
    }

    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    printf("Deleted\n");
}

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

void main(){
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    display();

    deleteFirst();
    display();

    deleteLast();
    display();
}