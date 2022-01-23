#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n , a , sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    a = n;
    while(a>1){
        if(a%2==0){
            a = a/2;
            sum = sum + a;
        }
        else{
            a = a+1;
        }
    }
    if( sum == n && n>0){
        printf("Its is a perfect number");
    }
    else{
        printf("It is not a perfect number.");
    }
    
}