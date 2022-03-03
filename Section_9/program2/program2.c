#include<stdio.h>
#include<conio.h>
void main(){
    int n,i;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    int *p = arr;
    printf("Enter items into array : ");
    for(i=0;i<n;i++){
        scanf("%u",p+i);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf(" %d",*(p+i));
    }
    printf("\n");
    for(i=n-1;i>=0;i--){
        printf(" %d",*(p+i));
    }
    getch();
}
