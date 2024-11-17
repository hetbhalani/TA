//49. WAP to implement following operation on link list: Delete from specified position.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void delete(int pos){    
    if(head == NULL){
        return;
    }

    struct Node* temp = head;

     if (pos == 1) {
        head = head->next;
        free(temp);
        printf("Node deleted at position %d\n", pos);
        return;
    }

    for(int i = 1; i < pos - 1 && temp->next != NULL; i++){
        temp = temp->next;
    }

    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
    printf("Node at position %d deleted\n", pos);

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
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtLast(40);
    insertAtLast(50);
    insertAtLast(60);
    insertAtLast(70);

    display();

    delete(2);
    display();

    delete(4); 
    display();
}