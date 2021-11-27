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

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(&arr[i],&arr[min]);
        }
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
