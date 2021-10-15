//
// Created by Sumit Suman on 22-09-2021.
//

#include<stdio.h>
#define N 10
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear+1)%N) == front){
        printf("Queue is full");
    }
    else{
        rear = (rear+1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1){
        printf("Underflow");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front+1) % N;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        while(i != rear){
            printf("%d\n", queue[i]);
            i = (i+1) % N;
        }
    }
}


int main()
{
    enqueue(1);
    enqueue(3);
    enqueue(5);
    enqueue(7);
    enqueue(9);
    peek();
    dequeue();
    peek();
    display();

    return 0;
}
