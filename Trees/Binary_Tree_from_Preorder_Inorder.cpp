//
// Created by Sumit Suman on 26-10-2021.
//

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);
}

void postorder(struct Node* root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";
}

int search(int inorder[], int start, int end, int curr){
    for(int i = start; i <= end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end){
    static int index = 0;
    if(start > end) {
        return NULL;
    }
    int curr = preorder[index];
    index++;
    Node* node = new Node(curr);
    if(start == end) {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node;

}

void inorderPrint(Node* root) {
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    int preorder[] = {1,2,4,8,9,5,10,3,6,7};
    int inorder[] = {8,4,9,10,5,2,1,6,3,7};

    Node* root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}


