//
// Created by Preshita Bala Sahay on 18-08-2021.
//

#include <stdio.h>
#define size 50

int main()
{
    int arr[size];
    int i,n,j,position, value, key;
    printf("Enter size of the array:");
    scanf("%d", &n);


    printf("Enter elements in the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a;
    printf("\n 1. Searching \n 2. Insertion \n 3. Updation \n 4. Deletion");
    printf("\n Enter your choice:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("\nEnter element to find : ");
            scanf("%d", &key);
            int x = 0;
            for(j = 0; j < size; j++)
            {
                if (arr[j] == key){
                    x = 1;
                    break;
                }
            }
            if(x == 1){
                printf("Element found at %d",j);
            }
            else{
                printf("Element not found");
            }
            break;


        case 2:
            printf("\nEnter the location where to insert an element:");
            scanf("%d", &position);

            if(position <= n && position >= 0)
            {
                printf("Enter the value to insert:");
                scanf("%d", &value);

                for (i = n - 1; i >= position - 1; i--)
                    arr[i+1] = arr[i];

                arr[position-1] = value;

                printf("\nResultant array is\n");

                for (i = 0; i <= n; i++){
                    printf("%d ", arr[i]);
                }
            }
            else{
                printf("Invalid Position\n");
            }

            break;

        case 3:
            printf("\nEnter the position where to update an element: ");
            scanf("%d", &position);

            if(position <= n && position >= 0)
            {
                printf("Enter the new value: ");
                scanf("%d", &value);

                arr[position - 1] = value;

                printf("\nResultant array is\n");

                for (i = 0; i < n; i++){
                    printf("%d ", arr[i]);
                }
            }
            else{
                printf("Invalid Position\n");
            }
            break;
        // Hello, Hi Bye!! Bye!!

        case 4:
            printf("\nEnter the position where to delete element: ");
            scanf("%d", &position);

            if (position >= n+1){
                printf("\nDeletion not possible.\n");
            }

            else
            {
                for (i = position-1; i < n-1; i++)
                    arr[i] = arr[i+1];

                printf("\nArray after deletion is\n ");

                for (i = 0; i < n-1; i++)
                    printf("%d ", arr[i]);                                                                                                                                                                                                                                                                                              //@sumit6258
            }
            break;
    }

    return 0;
}
