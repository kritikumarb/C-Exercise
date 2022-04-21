/*Write a program using function to input a m x n matrix
(of integers) and then find the largest, the 2nd largest,
the smallest,and the 2nd smallest numbers in it.*/

#include<stdio.h>
#include<conio.h>
#define m 100
#define n 100
void insertElement(int arr[][n], int s1,int s2);
void makeLinear(int all[] , int ar[][n]);
void show(int arr[][n],int s1, int s2);
void addLinear(int arr[][n]  , int s1 ,int s2 , int all[]);
void showLinear(int arr[],int x);
void sort(int arr[] , int x);
void main(){
    int s1,s2;
    printf("Enter Size of Elements : ");
    printf("\nEnter Rows : ");
    scanf("%d",&s1);
    printf("Enter Cols : ");
    scanf("%d",&s2);
    int arr[s1][s2];
    int all[s1*s2];
    insertElement(arr , s1 ,s2);
    //show(arr , s1,s2);
    addLinear(arr ,s1,s2, all);
    printf("\n");
    //showLinear(all , (s1*s2));
    printf("\n");
    sort(all , (s1*s2) );
    showLinear(all , (s1*s2));
    printf("\nLargest : %d\nSecond Largest : %d",all[0],all[1]);
    printf("\nSmallest : %d\nSecond Smallest : %d",all[s1*s2],all[(s1*s2)-1]);
}
void insertElement(int arr[][n],int s1 , int s2){
    int i,j;
    printf("Enter Elements Into array : \n");
    for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void showLinear(int all[] ,int x){
    for(int i=0;i<x;i++){
        printf("%d\t",all[i]);
    }
}
void show(int arr[][100], int s1 , int s2){
    int i,j;
    for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void addLinear(int arr[][n],int s1 ,int s2 , int all[]){
    int i,j,x=0;
    for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            all[x] = arr[i][j];
            x++;
        }
    }
}
void sort(int all[], int x){
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(all[i]>all[j]){
                int temp = all[i];
                all[i] = all[j];
                all[j] = temp;
            }
        }
    }
}
