//43. WAP to implement following operation on double ended queue: Enqueue, Dequeue, and Display.

#include<stdio.h>
#define SIZE 5

int q[SIZE];
int front = -1, rear = -1;


void display(){
    if(front == -1){
        printf("Queue is empty");
    }
    else{
        int i = front;
        while (1) {
            printf("%d ", q[i]);
            if(i == rear){
              break;  
            }  
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

void enqueueFront(int val){
    if((front == 0 && rear == SIZE-1) || front == rear+1){
        printf("overflow");
    }
    else{
        if(front == -1){
            front = rear = 0;
        }
        else if(front == 0){
            front = SIZE - 1;
        }
        else{
            front--;
        }
        q[front] = val;
        printf("%d Enqueue front\n", val);
    }
}

void enqueueRear(int val){
    if((front == 0 && rear == SIZE-1) || front == rear+1){
        printf("overflow");
    }
    else{
        if(front == -1){
            front = rear = 0;
        }
        else if(rear == SIZE -1){
            rear = 0;
        }
        else{
            rear++;
        }
        q[rear] = val;
        printf("%d Enqueue rear\n", val);
    }
}

void dequeueFront(){
    if(front == -1){
        printf("empty\n");
    }
    else{
        printf("%d is dequeued\n", q[front]);
        if(front == rear){  
            front = rear = -1;
        } 
        else if(front == SIZE - 1){
            front = 0;  
        } 
        else{
            front++;
        }
    }
}

void dequeueRear(){
    if(front == -1){
        printf("empty\n");
    }
    else{
        printf("%d is dequeued\n", q[rear]);
        if(front == rear){  
            front = rear = -1;
        } 
        else if(rear == 0){
            rear = SIZE - 1;  
        } 
        else{
            rear--;
        }
    }
}

void main(){
    enqueueRear(10);
    enqueueRear(20);
    enqueueFront(30);
    enqueueFront(40);
    display();
    
    dequeueFront();
    display();

    enqueueRear(50);
    display();
    
    dequeueRear();
    display();

    enqueueFront(70);
    display();
}