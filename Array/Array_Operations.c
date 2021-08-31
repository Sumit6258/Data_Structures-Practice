//
// Created by Sumit Suman on 18-08-2021.
//
#include <stdio.h>
#define size 50
int main()
{
    int arr[size], position, value, key;
    int i,n,j;
    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter %d elements in the array:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a;
    printf("\n 1. Searching \n 2. Traversing \n 3. Insertion \n 4. Deletion \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("\nEnter element to find : ");
            scanf("%d", &key);
            int x = 0;
            for(int j = 0; j < size; j++)
            {
                if (arr[j] == key){
                    x = 1;
               
                }
            }
            if(x == 1){
                printf("Element found at %d",j);
            }
            else{
                printf("Element not found");
            }

        case 2:
            printf("The array elements are:\n");

            for(i = 0; i < n; i++)
            {
                printf("Array[%d] = %d \n", i, arr[i]);
            }


        case 3:
            printf("Enter the location where you wish to insert an element\n");
            scanf("%d", &position);

            printf("Enter the value to insert\n");
            scanf("%d", &value);

            for (i = n - 1; i >= position - 1; i--)
                arr[i+1] = arr[i];

            arr[position-1] = value;

            printf("Resultant array is\n");

            for (i = 0; i <= n; i++){
                printf("%d\n", arr[i]);
            }

        case 4:
            printf("\nEnter the position where to delete element : ");
            scanf("%d", &position);

            if (position >= n+1){
                printf("\nDeletion not possible.\n");
            }
            else
            {
                for (i = position-1; i < n-1; i++)
                    arr[i] = arr[i+1];

                printf("\nArray after deletion : ");

                for (i = 0; i < n-1; i++)
                    printf("%d", arr[i]);                                                                                                                                                                                                                                                                                              //@sumit6258
            }
    }

    return 0;
}
