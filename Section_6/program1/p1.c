#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i,j,temp;
    int n ;
    printf("Enter size of array : ");
    scanf("%d",&n);
    
    
    int number[n];
    printf("Enter items into array : ");
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    printf("Before Decending : ");
    for(i=0;i<n;i++){
        printf("%d \t",number[i]);
    }
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(number[i]>number[j]){
                temp = number[j];
                number[j]=number[i];
                number[i]= temp;
            }
        }
    }
    printf("\nAfter Decending : ");
    for(i=0;i<n;i++){
        printf("%d \t",number[i]);
    }
}