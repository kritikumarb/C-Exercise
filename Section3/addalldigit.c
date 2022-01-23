#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a, b , c ,d,e, sum ;
    printf("Enter a 4 digit number : ");
    scanf("%d",&a);
    b = a % 10;
    a = a / 10;
    c = a % 10;
    a = a / 10;
    d = a % 10;
    a = a / 10;
    e = a % 10;
    sum = b+c+d+e;898
    
    printf("Sum of all digits is : %d", sum);
    
}