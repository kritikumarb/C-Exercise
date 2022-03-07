#include<stdio.h>
#include<conio.h>
#define row 4
#define col 5
void scanMatrix(int arr[][col]);
int size(int arr[][col]);
void printMatrix(int arr[][col]);
void main(){
    int i,r=0,j,m,n,arr[row][col];
    printf("Enter Elements into Matrix : \n");
    scanMatrix(arr);
    printf("\nThe Matrix is : \n");
    printMatrix(arr);
    int size1 = size(arr);
    int all[3][size1];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]>0){
                all[r][0] = i;
                all[r][1] = j;
                all[r][2] = arr[i][j];
                r++;
            }
        }
    }
    printf("\n\n");
    for(int i=0;i<size1;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",all[i][j]);

        }
        printf("\n");
    }

}
void scanMatrix(int arr[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
int size(int arr[][col]){
    int count = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] > 0){
                count++;
            }
        }
    }
    return count;
}
void printMatrix(int arr[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

