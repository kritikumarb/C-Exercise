#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a[20],size,i;
    size = 5;
    for(i=0;i<size;i++){
        scanf("%d ",&a[i]);
    }

    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
}