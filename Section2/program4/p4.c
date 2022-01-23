#include<stdio.h>
#include<conio.h>
void main()
{ 
    float f;
    printf("Enter Money in Rs : ");
    scanf("%f",&f);
    printf("RS %.2f = %0.0f Paisa",f,f*100);
}