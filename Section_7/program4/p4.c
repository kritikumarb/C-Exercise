#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n,i,j,sum=0;
    printf("Enter the length of matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter items into matyrix : \n");
    for(i=0;i<n;i++){
        printf("Row %d : \n",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nSum of all the diagonal elements is : %d ",sum);
}