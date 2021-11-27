//
// Created by Sumit Suman on 10-11-2021. ✌✌✌
//

#include<stdio.h>

int LinearSearch(int array[], int size, int key)
{
    for(int i = 0; i < size; i++){
        if (array[i] == key){
            return i;
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

    if(LinearSearch(array,size,key) == -1){
        printf("Element not found in the array");
    }
    else {
        printf("Element %d found at index %d", key, LinearSearch(array, size, key));
    }
    return 0;
}