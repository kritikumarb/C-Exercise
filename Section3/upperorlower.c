#include<stdio.h>
#include<conio.h>
void main()
{ 
    char c ;
    printf("Enter a character : ");
    scanf("%c",&c);
    (c>='A' && c <=90)?printf("Its a capital character."):((c>=97 && c<=122)?printf("Its a small character."):printf("Invalid Input"));
    
    

}