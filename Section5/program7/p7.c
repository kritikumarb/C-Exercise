#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n , rev=0 , temp;
    printf("enter aa number : ");
    scanf("%d",&n);
    temp = n;
    while(n>0)   {
        rev = (rev*10)+ (n%10);
        n = n/10;
    }
    printf("%d == %d\n",rev,temp);
    if(rev == temp){
        printf("%d is a palindrome",temp);

    }
    else{
        printf("%d isnt a palindrome.",temp);
    }
}