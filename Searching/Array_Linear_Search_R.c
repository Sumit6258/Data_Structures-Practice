//
// Created by Sumit Suman on 17-11-2021.
//Linear Search using Recursion

#include<stdio.h>

int linear_Search(int a[], int, int);
int main()
{
    int n, i, a[10], key, pos = 0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched:");
    scanf("%d",&key);
    pos = linear_Search(a, n, key);

    if(pos != 0){
        printf("element %d is found at %dth position",key, pos);
    }
    else{
        printf("element not found\n");
    }
    return 0;
}

int linear_Search(int a[], int n, int key)
{
    if(n>=0){
        if(a[n-1] == key){
            return n;
        }
        else{
            return linear_Search(a, n-1, key);
        }
        n--;
    }
}
