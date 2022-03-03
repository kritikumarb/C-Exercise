#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0){
        printf("\n\n \t\t EVEN");

    }
    else{
        printf("\n\n \t\t ODD");
    }

    getch();
}