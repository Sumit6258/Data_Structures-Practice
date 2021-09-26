//
// Created by Sumit Suman on 09-09-2021.
//

#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};

void insertAthead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int value){
    node* n = new node(value);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=n;
}

void insertAt(node* &head, int position, int value){
    node* n = new node(value);
    n -> data = value;
    n -> next = NULL;

    if(position == 1){
        n -> next = head;
        head = n;
        return;
    }
    else if(head == NULL){
        printf("Overflow");
    }
    node* n1 = head;
    for(int i = 0; i < position - 2; i++){
        n1 = n1 -> next;
    }
    n -> next = n1 -> next;
    n1 -> next = n;

}

void deleteAThead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node* &head, int value){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAThead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=value){
        temp = temp->next;
    }
    node* todelete = temp -> next;
    temp->next = temp->next->next;

    delete todelete;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head,3);
    insertAtTail(head,5);
    display(head);//Display all entered elements
    insertAtTail(head,7);
    display(head);
    insertAthead(head,9);
    insertAt(head,4,4);
    display(head);
    deletion(head,3);
    //cout<< sumit6258 <<search(head,2);
    display(head);
    deleteAThead(head);
    display(head);

    return 0;
}
