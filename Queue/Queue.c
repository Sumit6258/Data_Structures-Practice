//
// Created by Sumit Suman on 06-09-2021.
//

#include<stdio.h>
#define N 10
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == N -1){
        printf("Overflow");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
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
        //printf("Dequeue element %d",queue[front]);
        front++;
    }
}
void display()
{
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        for(int i = front; i < rear + 1; i++){
            printf("%d\n", queue[i]);
        }
    }
}
void peek()
{
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        printf("%d\n", queue[front]);
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
    display();

    return 0;
}