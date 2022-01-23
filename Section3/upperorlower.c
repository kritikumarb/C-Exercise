#include<stdio.h>
#include<conio.h>
void main()
{ 
    char c ;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>='A' && c <=90){
        printf("Its a capital character."); 
    }
    else if(c>=97 && c<=122){
        printf("Its a small character.");
    }
    else {
        printf("Invalid Input");
    }

}