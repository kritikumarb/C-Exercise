#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n,i,j,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int number[n];
    printf("Enter items into array : ");
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(number[i]>number[j]){
                temp = number[i];
                number[i]= number[j];
                number[j]= temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",number[i]);
    }
    printf("\nSecond Largest : %d \nSecond Smallest : %d",number[1],number[n-2]);

}