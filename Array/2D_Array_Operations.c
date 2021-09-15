//
// Created by Sumit Suman on 20-08-2021.
//

#include<stdio.h>

int main()
{
    int r, c, i, j, key, new;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c], transpose[r][c];
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n printing the elements ....\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }

    int a;
    printf("\n 1. Searching \n 2. Updating \n 3. Transpose \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("\nEnter element to find : ");
            scanf("%d", &key);
            int x = 0;
            for(i = 0; i < r; i++)
            {
                for(j = 0; j < c; j++)
                {
                    if(key == arr[i][j])
                    {
                        x = 1;
                        printf("Element found at position %d,%d",i,j);
                        break;
                    }
                }
            }
            if(x == 0){
                printf("Element not found");
            }

        case 2:
            printf("\nEnter the location in a matrix where value will be updated: ");
            scanf("%d %d",&i,&j);
            printf("\nEnter the value to be replaced: ");
            scanf("%d",&new);
            arr[i][j]= new;
            printf("\nArray after updating: \n");
            for(i = 0; i < r; i++)
            {
                printf("\n");
                for (j = 0; j < c; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
            }

        case 3:
            printf("\nTranspose of the matrix:\n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    transpose[j][i] = arr[i][j];
                }
            }
            for(i = 0; i < r; i++)
            {
                printf("\n");
                for(j = 0; j < c; j++)
                {
                    printf("%d\t",transpose[i][j]);
                }
            }
    }

    return 0;
}
