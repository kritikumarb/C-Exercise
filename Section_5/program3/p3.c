#include<stdio.h>
#include<conio.h>
void main()
{ 
    int count , number ;
    count = 0;
    printf("Enter number : ");
    scanf("%d",&number);
    while(number){
        number = number/10;
        count++;
    }
    printf("No of digits are : %d",count);
}