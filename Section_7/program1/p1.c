#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    n = 2;
    printf("Enter the size of square matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the items into the matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%5d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            
            if(a[i][j]==a[j][i]){
                continue;
            }
            else{
                printf("Matrix is not symmentric.");
                return;
            }
            
        }
    }
    printf("Matrix is symmentric. ");
    
}
