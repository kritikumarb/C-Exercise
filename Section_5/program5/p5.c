#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i , sum , n;
    n = 0;
    sum = 0;
    for(i=100; i <=200 ; i++){
        if(i % 7 == 0){
            printf("%d  ",i);
            sum =  sum + i;
            n++;
        }
    }
    printf("\nThere are %d number of integers.\n",n);
    printf("Sum of these integers is %d.",sum);
}