#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a, b , sum ;
    printf("Enter a 4 digit number : ");
    scanf("%d",&a);
    b = a % 10;
    a = a / 10;
    sum =0;
    sum = sum + b;
    b = a % 10;
    a = a / 10;
    sum = sum +b;
    b = a % 10;
    a = a / 10;
    sum = sum + a + b;
    
    
    
    printf("Sum of all digits is : %d", sum);
    
}