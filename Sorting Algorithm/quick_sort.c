#include <stdio.h>
int main()
{
    int x[10], i, n;
    printf("enter number of elements:");
    scanf("%d", &n);
    // printf("enter %d elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);
    quicksort(x, 0, n - 1); /*function call*/
    printf("sorted elements are:");
    for (i = 0; i < n; i++)
        printf("%3d", x[i]);
}
/*called function*/
quicksort(int x[10], int first, int last)
{
    int pivot, i, j, t;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (x[i] <= x[pivot] && i < last)
                i++;
            while (x[j] > x[pivot])
                j--;
            if (i < j)
                {
                    t = x[i];
                    x[i] = x[j];
                    x[j] = t;
                }
        }
        t = x[pivot];
        x[pivot] = x[j];
        x[j] = t;
        quicksort(x, first, j - 1);
        quicksort(x, j + 1, last);
    }
}
