#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAthead(node *&head, int val)
{
    node *n= new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
    }
    node *temp=head;
    while (temp->next!=head)
    {
       temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertAtTail(node *&head, int val)
{
    if(head==NULL)
    {
        insertAthead(head,val);
        return;
    }
    node *n= new node(val);
    node *temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node *head)
{
    node *temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
void merge(node *&head, node *&head2)
{
    node *temp2=head2;
    while(temp2->next!=head2)
    {
        temp2=temp2->next;
    }
    temp2->next=head;
    node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head2;
    
    
}
int main()
{
    node *head=NULL;
    node *head2=NULL;
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,7);
    insertAtTail(head2,20);
    insertAtTail(head2,40);
    insertAtTail(head2,50);
    insertAtTail(head2,70);
    cout<<"\nlist1: ";
    display(head);
    cout<<"\nlist 2: ";
    display(head2);
    merge(head,head2);
    cout<<"\nlist after concatenating: ";
    display(head);
    return 0;
}
