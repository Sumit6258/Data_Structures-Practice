//
// Created by Sumit Suman on 10-11-2021.
//

#include<stdio.h>

int Binary_Search(int array[], int size, int key)
{
    int first = 0;
    int last  = size;
    while(first <= last){
        int mid = (first + last)/2;
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    return -1;//i.e element not found in the array
}

int main()
{
    int size;
    printf(" Enter size of array: ");
    scanf("%d",&size);

    int array[size];
    printf("Enter elements in array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int key;
    printf("Enter key element to find: ");
    scanf("%d",&key);

    if(Binary_Search(array,size,key) == -1){
        printf("Element not found in the array");
    }
    else{
        printf("Element %d found at index %d" ,key,Binary_Search(array,size,key));
    }
    return 0;
}
