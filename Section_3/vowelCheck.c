#include<stdio.h>
#include<conio.h>
void main()
{ 
    char ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    (ch == 65 || ch == 69 || ch ==73||ch == 79 || ch == 85 ||
    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')?printf("It is a vowel"):printf("Its a consonant");
}