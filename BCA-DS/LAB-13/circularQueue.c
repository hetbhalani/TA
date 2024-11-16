// 42. WAP to implement following operation on circular queue: Enqueue, Dequeue, and Display.

#include <stdio.h>
#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void enqueue(int val){
    if((rear + 1) % SIZE == front){
        printf("Queue is overflow");
    }
    else{
        if (front == -1){
            front = 0;
        }
        rear = (rear+1) % SIZE;
        q[rear] = val;
        printf("%d is enqueued\n", val);
    }
}

void dequeue(){
    if(front == -1){
        printf("Queue is empty");
    }
    else{
        printf("%d is dequeued\n", q[front]);
       if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front + 1) % SIZE;
        }
    }
}

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

void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();

    display();    
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    display();
}