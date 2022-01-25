#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,largest;
    printf("Enter 3 numbers : \n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    largest = a;

    if (b > largest){
        largest = b;
    }
    else if (c > largest){
        largest = c;
    }

    printf("Largest Number is : %d",largest);
    
}
