#include<stdio.h>
#include<conio.h>
void main()
{ 
    float a,b;
    printf("enter 2 float numbers : \n");
    scanf("%f%f",&a,&b);
    float c = a/b;
    printf(" %.2f / %.2f = %0.2f ",a,b,c);

}