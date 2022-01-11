//
// Created by Sumit Suman on 22-09-2021.
//

#include<stdio.h>
#include<stdlib.h>

#define n 100
int count = 0;

struct stack {
    int *arr[n];
    int top;
};

typedef struct stack st;

void Stack(st *s){
    s->top = -1;
}

void push(st *s, int x){
    if(s->top == n - 1){
        printf("Stack overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top] = x;
    }
    count++;
}

void pop(st *s){
    if(s->top == -1){
        printf("No element to pop\n");
        return;
    }
    else{
        s->top--;
    }
    count--;
}

void Top(st *s){

    if(s->top == -1){
        printf("Stack is empty\n");
        //return -1;
    }
    printf("%d\n",s->arr[s->top]);
    //return s->arr[s->top];
}

int empty(st *s){

    if(s->top == -1){
        printf("Empty\n");
        return 1;
    }
    else{
        printf("Not Empty\n");
        return 0;
    }
}

int main()
{
    st *s = (st *)malloc(n);
    Stack(s);
    int p1;
    printf("1.Push \n2.Pop \n3.Top \n4.Display \n5.Exit\n");
    int choice;
    while(choice != 7){
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
               printf("Enter item to push in stack:");
               scanf("%d",&p1);
               push(s,p1);
               break;
            case 2:
                printf("Pop from stack");
                pop(s);
                printf("\n");
                break;
            case 3:
                printf("Topmost item of stack:");
                Top(s);
                printf("\n");
                break;
            case 4:
                printf("\nPrinting elements of Stack\n");
                for (int i = s->top; i >= 0; i--){
                    printf("%d\n",s->arr[i]);
                }
                printf("\n");
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid Choice");
        }
    }
    return 0;
}

