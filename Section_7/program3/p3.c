#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n,i,j;
    printf("Enter the matrix length : ");
    scanf("%d",&n);
    int a[n][n];
    int sumRow[n],sumCol[n];
    printf("Enter items into arrY : \n");
    for(i=0;i<n;i++){
        printf("Enter elements into row %d :\n",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sumRow[i] = 0;
        sumCol[i] = 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sumRow[i] = sumRow[i] + a[i][j];
            sumCol[i] = sumCol[i] + a[j][i];

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("Sum of Rows are : ");
    for(i=0;i<n;i++){
        printf("%d\t",sumRow[i]);
    }
    printf("\nSum of colums are : ");
    for(i=0;i<n;i++){
        printf("%d\t",sumCol[i]);
    }
}