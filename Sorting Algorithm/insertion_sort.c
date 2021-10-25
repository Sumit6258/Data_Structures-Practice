#include <stdio.h>
void inst_sort(int[]);
void main()
{   
    int num[5], count;
    printf("\n enter the  elements to sort:\n");
    for (count = 0; count < 5; count++)
        scanf("%d", &num[count]);
    inst_sort(num); /*function call for insertion sort*/
    printf("\n\n elements after sorting:\n");
    for (count = 0; count < 5; count++)
        printf("%d\n", num[count]);
}
void inst_sort(int num[])
{ /* function definition for insertion sort*/
    int i, j, k;
    for (j = 1; j < 5; j++)
    {
        k = num[j];
        for (i = j - 1; i >= 0 && k < num[i]; i--)
        num[i + 1] = num[i];
        num[i + 1] = k;
    }
}