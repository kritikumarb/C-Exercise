#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ 
    char ch[20];
    printf("Enter a name : ");
    gets(ch);
    int i=0;
    while(ch[i]!= NULL){
        
        i++;
    }
    printf("%d",i);
}