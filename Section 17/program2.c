#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("f1.txt","w");
    if(fp==NULL){
        printf("File can not open");
        exit(1);
    }
    int i;
    char s[100];
    printf("Enter A String: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        fputc(s[i],fp);
    }
    fclose(fp);
    getch();
}
