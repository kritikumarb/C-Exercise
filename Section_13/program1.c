#include<stdio.h>

#include<conio.h>
#include<stdlib.h>

 void main()
 {
     int *ptr;
     int n,sum=0,avg=0;
     printf("enter size:");
     scanf("%d",&n);
     ptr =(int*)calloc(n,sizeof(int));
     if(ptr == NULL)
     {
         printf("out of meneory");
         exit(0);
     }
     printf("\n");
     for(int i=0;i<n;i++)
     {
         scanf("\t%d",(ptr+i));
         sum = sum+*(ptr+i);
     }
     printf("\nSum : %d \nAverage : %d",sum , sum/n);
     getch();
 }
