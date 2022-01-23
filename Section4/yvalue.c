#include<stdio.h>
#include<conio.h>
void main()
{ 
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>0){
        y = 1;
    }
    if(x<0){
        y = -1;
    }
    if(x == 0){
        y = 0;
    }
    printf("for every x = %d y = %d",x,y);
}