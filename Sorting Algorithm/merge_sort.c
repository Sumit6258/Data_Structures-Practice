#include <stdio.h>
void mergesort(int[], int, int);
void mergearray(int[], int, int, int);
int main()
{
    int a[50], n, i;
    printf("\n enter size of an array:");
    scanf("%d", &n);
    printf("\n enter elements of an array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mergesort(a, 0, n - 1);
    printf("\n\nafter sorting:\n");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);
}
/*merge operation*/
void mergesort(int a[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        mergesort(a, beg, mid);
        mergesort(a, mid + 1, end);
        mergearray(a, beg, mid, end);
    }
}
void mergearray(int a[], int beg, int mid, int end)
{
    int i, leftend, num, temp, j, k, b[50];
    for (i = beg; i <= end; i++)
        b[i] = a[i];
    i = beg;
    j = mid + 1;
    k = beg;
    while ((i <= mid) && (j <= end))
    {
        if (b[i] < +b[j])

        {
            a[k] = b[i];
            i++;
            k++;
        }
        else
        {
            a[k] = b[j];
            j++;
            k++;
        }
    }
    if (i <= mid)
    {
        while (i <= mid)
        {
            a[k] = b[i];
            i++;
            k++;
        }
    }
    else
    {
        while (j <= end)
        {
            a[k] = b[j];
            j++;
            k++;
        }
    }
}
