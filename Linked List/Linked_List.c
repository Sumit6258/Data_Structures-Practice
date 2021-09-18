//
// Created by Sumit Suman on 09-09-2021.
//

#include<stdio.h>

struct node{
    int data;
    struct node * next;
};

int main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    
    int choice;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter data:");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        
        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
        
        printf("Continue(0/1):");
        scanf("%d", &choice);
    }
    
    temp = head;
    while(temp != 0)
    {
        printf("%d",temp -> data);
        temp = temp -> next;
    }
    
    return 0;

}
