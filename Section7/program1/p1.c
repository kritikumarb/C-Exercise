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
            printf("%d * %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int sym=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i != j){
                if(a[i][j]==a[j][i]){
                    sym =1;
                }
                else{
                    sym = 0;
                }
            }
        }
    }
    if(sym == 1){
        printf("Matrix is symmentric. ");
    }
    else{
        printf("Matrix is not symmentric.");
    }
}