#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{ 
    int c,a,n , temp , sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n;
    while(a>0){
        a = a/10;
        c++;
    }
    a = n;
    while(a>0){
        sum = sum + pow(a%10 , c);
        a = a/10;
    }
    printf("Sum is : %d\n",sum);
    if(n == sum){
        printf("Number is  a armstrong");

    }
    else{
        printf("Number is not an armstrong");
    }
}