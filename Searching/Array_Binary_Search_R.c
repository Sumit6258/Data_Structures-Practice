//
// Created by Sumit Suman on 17-11-2021.
//

#include <stdio.h>

int Binary_Search(int array[], int low, int high, int x) {
    int mid = (low + high) / 2;
    if (low > high) return -1;
    if (array[mid] == x) return mid;

    if (array[mid] < x)
        return Binary_Search(array, mid + 1, high, x);
    else
        return Binary_Search(array, low, mid-1, x);
}

int main() {
    int array[100];
    int len, pos, search_item;
    printf("Enter the size of the array:");
    scanf("%d", &len);

    printf("Enter elements in array:");
    for (int i=0; i<len; i++)
        scanf("%d", &array[i]);

    printf("Enter key element to find:");
    scanf("%d", &search_item);

    pos = Binary_Search(array,0,len-1,search_item);

    if (pos < 0 )
        printf("Cannot find the element %d in the array.\n", search_item);
    else
        printf("The position of %d in the array is %d.\n", search_item, pos+1);
    return 0;
}