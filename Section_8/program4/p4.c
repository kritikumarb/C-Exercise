#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{ 
    char ch[50];
    char cr[50];
    printf("Enter first word : ");
    gets(ch);
    printf("Enter second word : ");
    gets(cr);
    int com = strcmp(ch, cr);
    int i,j;
    for(i=0;i<strlen(ch);i++){
        if(ch[i] == cr[i]){
            com = 0;
        }
        else if(ch[i]>cr[i]){
            com = 1;
            break;
        }
        else if(ch[i]<cr[i]){
            com = -1;
            break;
        }
    }
    if(com ==0){
        printf("Both same");        
    }
    else if(com>0){
        printf("First is higher than second");
    }
    else if(com<0){
        printf("Second is higher than first");
    }
}