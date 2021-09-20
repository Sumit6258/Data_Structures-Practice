//
// Created by Sumit Suman on 15-09-2021.
//

#include<stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n Printing the elements ....\n");
    for(int i = 0;i < r; i++)
    {
        printf("\n");
        for (int j = 0;j < c; j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }

    int count = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j <  c; j++){
            if(arr[i][j] == 0)
                count++;
        }
    }
    if(count >= ((r * c) / 2)){
        printf("\nIt's Sparse Matrix");
    }
    else{
        printf("\nIt's not Sparse Matrix");
    }


    return 0;

}
