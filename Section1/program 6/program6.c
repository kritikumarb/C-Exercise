#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 numbers : \n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Number before swapping is %d And %d \n",a,b);
    a = a+b;
    b = a - b;
    a = a - b;
    
    printf("Number after swapping is %d And %d \n",a,b);
}
