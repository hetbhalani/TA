// 40. WAP to implement following operation on queue: Enqueue, Dequeue, and Display. 

#include<stdio.h>
#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void enqueue(int val){
    if(rear == SIZE-1){
        printf("Queue is overflow\n");
    }
    else{
        if(front = -1){
            front = 0;
        }
        rear++;
        q[rear] = val;
        printf("%d is enqueued\n",val); 
    }
}

void dequeue(){
    if(front == -1){
        printf("Queue is empty");
    }
    else{
        printf("%d is dequeued\n", q[front]);
        front++;
    }
}

void display(){
    if(front == -1){
        printf("Queue is emply");
    }
    else{
        for(int i = front; i<=rear; i++){
            printf("%d ", q[i]);
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