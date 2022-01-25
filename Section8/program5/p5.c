#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ 
    char ch[50];
    char temp;
    int i,j;
    printf("Write a string : ");
    gets(ch);
    for(i=0;i<strlen(ch);i++){
        for(j=0;j<strlen(ch);j++){
            if(ch[i]<ch[j]){
                temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        }
    }
    printf("%s",ch);
}