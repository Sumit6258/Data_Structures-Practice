//
// Created by Sumit Suman on 14-08-2021.
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
        //return;
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
    //printf("\n");
}

void Top(st *s){

    if(s->top == -1){
        printf("No element to pop\n");
        //return -1;
    }
    printf("%d\n",s->arr[s->top]);
    //return s->arr[s->top];
}

int empty(st *s){

    if(s->top == -1){
        printf("Empty");
        return 1;
    }
    else{
        printf("Not Empty");
        return 0;
    }
}

int main()
{

    st *s = (st *)malloc(n);

    Stack(s);

    push(s, 1);//1 is added on the bottom of stack
    push(s,3);//3 is added on top of 2
    push(s,5);//5 is added on the top of stack
    Top(s);
    pop(s);//5 is removed
    pop(s);//3 is removed
    empty(s);
    //Print elements of stack
    /*
    for (int i = 0; i < count; i++){
        printf("%d",s->arr[i]);
    }
    printf("\n");
    */
    return 0;
}


