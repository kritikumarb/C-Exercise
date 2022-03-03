#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a,b,c,d;
    printf("Enter 3 numbvers : ");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && a>c){
        d = a;
    }
    else if(b>a && b>c){
        d = b;
    }
    else{
        d = c;

    }
    printf("Largest number is %d",d);
}