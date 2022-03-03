/*Write a program using function to input a m x n matrix
(of integers) and then find the largest, the 2nd largest,
the smallest,and the 2nd smallest numbers in it.*/

#include<stdio.h>
#include<conio.h>
void enterElements(int *p, int m , int n){
    int i,j;
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",((p+i)+j));
        }
     }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(p+i)+j);
        }
        printf("\n");
     }
     printf("\n\n");
}
void sort(int *p,int m,int n){
    int i,j;
    int *x = p;
    for(i =0;i<m*n;i++){
        for(j=1;j<m*n;j++){
            if(*(p+j)<*(p+j+1)){
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
    
}
void main(){
    int m , i , n;
     printf("Enter Size of Matrix : ");
     printf("\nEnter Size of rows : ");
     scanf("%d",&m);
     printf("\nEnter size of col : ");
     scanf("%d",&n);
     int arr[m][n];
     int *p = arr;
     enterElements(p , m , n);
     sort(p , m , n);
     for(i=0;i<m*n;i++){
        printf("%d \t",*(p+i));
    }

}
