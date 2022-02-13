#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{ 
    int a,n , temp , sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    a = n;
    while(a){
        temp = a%10;
        a = a/10;
        sum = sum+(temp*temp*temp);

    }
    printf("Sum is : %d\n",sum);
    if(n == sum){
        printf("Number is  a armstrong");

    }
    else{
        printf("Number is not an armstrong");
    }
}