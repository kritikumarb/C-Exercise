#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define col 3

void insert(int arr[][col],int row);

void main(){
    int n;
    printf("Enter tyhe no of rows in the tuple form : ");
    scanf("%d",&n);
    int sp[n][col];

}
void insert(int arr[][col],int row){
    int i,j;
    for(i=0;i<row ;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
