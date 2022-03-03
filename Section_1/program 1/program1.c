/*Write an algorithm and draw the flow chart to compute the smallest of three numbers.*/
#include<stdio.h>
#include<conio.h>


void main(){
    int a,b,c,smallest;
    printf("Enter 3 numbers : ");
    printf("\n------------------------------\n");

    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    smallest = a;

    if (b<smallest){
        smallest= b;
    }
    else if (c<smallest){
        smallest= c;
    }

    printf("Largest Number is : %d",smallest);
}