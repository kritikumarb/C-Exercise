#include<stdio.h>
#include<conio.h>
void main()
{ 
    int row , input , column , space;
    printf("Enter no of rows : ");
    scanf("%d",&input);
    for ( row =1 ; row < input ; row++){
        for( space=1;space< input-row ; space++){
            printf(" ");
        }
        for( column = 1 ; column <= ((2*row)-1);column++){
            printf("*");
        }
    printf("\n");
   }
}