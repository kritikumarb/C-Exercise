#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define col 3
void sparse(int arr[][col], int row);
void main()
{
    int n, i, j;
    printf("Enter No Of row : ");
    scanf("%d", &n);
    n = n+1;
    int arr[n][col];
    printf("Enter Size of Matrix : ");
    printf("\nTotal Rows : ");
    scanf("%d", &arr[0][0]);
    printf("Entyer Col : ");
    scanf("%d", &arr[0][1]);
    arr[0][2] = n-1;
    printf("\nEnter Matrix In tuple form\n");

    for (i = 1; i < n; i++)
    {
        printf("Row : ");
        scanf("%d", &arr[i][0]);
        printf("Col : ");
        scanf("%d", &arr[i][1]);
        printf("Number : ");
        scanf("%d", &arr[i][2]);
    }
    printf("\nEntred Tuple Matrix is : \n");
    printf("\nROW\tCOL\tNUM\n");
    for (i = 0; i < n; i++)
    {

        printf("%d\t%d\t%d", arr[i][0], arr[i][1], arr[i][2]);

        printf("\n");
    }
    sparse(arr , n);
}

void sparse(int arr[][col], int row)
{
    int ar[arr[0][0]][arr[0][1]];
    int i , j;
    for(i=0;i<arr[0][0];i++){
        for(j=0;j<arr[0][1];j++){
            ar[i][j]=0;
        }
    }
    printf("\n");
   
    printf("\n");
    for(i=1;i<row;i++){
        ar[arr[i][0]][arr[i][1]]=arr[i][2];
    }
    printf("\n");
    printf("Sparse Matrix is : \n\n");
    for(i=0;i<arr[0][0];i++){
        for(j=0;j<arr[0][1];j++){
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Of matrix is : \n");
    for(i=0;i<arr[0][1];i++){
        for(j=0;j<arr[0][0];j++){
            printf("%d\t",ar[j][i]);
        }
        printf("\n");
    }
}
