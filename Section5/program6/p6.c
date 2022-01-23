#include<stdio.h>
#include<conio.h>
void main()
{ 
    int m,n , lcm,hcf,max;
    printf("Enter 2 numbers : \n");
    scanf("%d %d",&m,&n);

    max = (m>n)?m:n;
    while(1){
        if(max%m==0 && max%n==0){
            printf("Lcm of %d and %d is %d",m,n,max);
            lcm = max;
            break;
        }
        max++;
    }
    hcf = (m*n)/lcm;
    printf("\nHcf of %d and %d is %d.",m,n,hcf);
}