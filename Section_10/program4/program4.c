#include<stdio.h>
#include<conio.h>
#define x 100
void insertIntoArray(int arr[][x],int m,int n);
void showMatrix(int arr[][x],int m,int n);
void main()
{
    int m,n,arr[x][x];
    printf("Enter size of matrix : \n");
    printf("\nEnter No of Rows : ");
    scanf("%d",&m);
    printf("Enter number of col : ");
    scanf("%d",&n);
    insertIntoArray(arr , m, n);
    showMatrix(arr , m ,n);
}
void showMatrix(int arr[][x],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void insertIntoArray(int arr[][x],int m,int n){
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
