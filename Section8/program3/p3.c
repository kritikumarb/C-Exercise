#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ 
    int n1,n2,j=0;
    char ch[50],cr[50];
    printf("Enter String : \n");
    gets(ch);
    printf("Crop string from : ");
    scanf("%d",&n1);
    printf("Crop string upto : ");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++){
        cr[j] = ch[i];
        j++;
    }
    printf("%s\n",cr);
    printf("Check");

}