//
// Created by Sumit Suman on 23-01-2021.
//

#include <stdio.h>
#define size 50
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int arr[], int n, int i) {
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < n && arr[leftChild] > arr[max])
        max = leftChild;

    if (rightChild < n && arr[rightChild] > arr[max])
        max = rightChild;

    if (max != i) {
        swap(&arr[i], &arr[max]);
        heapify(arr, n, max);
    }
}

void heapSort(int arr[], int n, int k) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > k; i--) {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }

    printf("%d ",arr[0]);
}

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
    return 0;

}