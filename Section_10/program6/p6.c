#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char* deleteChar(char p[] , char x){

    char t[100];
    char *u=t;
    int i=0,j=0;
    while(p[i]!='\0'){
        if(p[i]!=x){
            t[j] = p[i];
            j++;
        }
        i++;
    }
    t[j] = '\0';
    return u;
}
void main(){
    char name[100], ch , *s;
    printf("Enter Character string : ");
    scanf("%s",name);
    printf("Enter the Character you want to delete : ");
    ch = getche();
    s = deleteChar(&name , ch);
    printf("%s", *(s));
}
