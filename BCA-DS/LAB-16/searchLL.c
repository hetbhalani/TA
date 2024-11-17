//51. WAP to implement following operation on link list: Search node from link list.

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

void search(int val){
    if(head == NULL){
        return;
    }
    int count = 1;

    struct Node* temp = head;

    while(temp!= NULL){
        if(temp->data == val){
            printf("foundt %d at %d position\n",val ,count);
            return;
        }
        count++;
        temp = temp->next;
    }
    printf("%d Not found\n", val);
}

void main(){
    insertAtLast(1);
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(4);
    insertAtLast(5);
    insertAtLast(6);
    insertAtLast(7);

    search(3);
    search(123);
}