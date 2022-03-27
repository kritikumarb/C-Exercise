#include<stdio.h>
#include<conio.h>
void main()
{ 
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    y = (x>0)?(1):((x<0)?(-1):0);
    printf("for every x = %d y = %d",x,y);
}