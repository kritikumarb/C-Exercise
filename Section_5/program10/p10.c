#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a , b , fib , c;
    printf("Enter number of fibbonaci you want to print : ");
    scanf("%d",&c);
    a = 0;
    b = 1;
    fib = 0;
    do{
        printf("%d , ",a);
        fib = a+b;
        a = b;
        b = fib;

        c--;
   }
   while(c>=0);

}