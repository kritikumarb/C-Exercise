#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ 
    char ch[50],c;
    int i,a=0;
    printf("Enter a line of text : ");
    gets(ch);
    printf("Enter the character you want to find : ");
    scanf("%c",&c);
    for(i=0;i<strlen(ch);i++){
        if(ch[i] == c){
            a++;
        }
    }
    printf("In the sentence %c is used %d times. ",c,a);

   

}