//
// Created by Sumit Suman on 22-01-2021.
//
#include <stdio.h>
#define size 50
void swap(int *a, int *b);

int main() {
    int arr[size];
    int n, i;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSorted array: ");

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp)
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("\n%d", arr[i]);
    }

    return 0;
}


void swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}
