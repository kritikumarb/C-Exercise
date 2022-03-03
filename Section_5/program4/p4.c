#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i , j , n ;
    float  temp , sum=1;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    {
        temp = i;
        int fact = 1;
        for(j=1;j<=i+1;j++){
            fact = fact*j;
        }
        if(i%2==0)
        {
            temp = 0 - temp;
        }
        sum = sum + (temp/fact);
        
    }
    printf("result is : %f",sum);
}