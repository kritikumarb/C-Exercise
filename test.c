#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void number(int x);

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    if(a<=9){
        for(int i=a;i<=9;i++){
            number(i);
            even(i);
            printf("\n");
            feven(i);
            printf("\n");
        }
    }
    if(b<=9){
        for(int i=b;i<=9;i++){
            number(i);
               even(i);
            printf("\n");
            feven(i);
            printf("\n");
        }
    }



    return 0;
}
void feven(int x){
    if(x%2==0){
        printf("even");
        printf("\n");
    }
    else{
        printf("odd");
        printf("\n");
    }
}
void number(int x){
    if(x==1){
        printf("one");
        printf("\n");
    }
    if(x==2){
        printf("two");
        printf("\n");
    }
    if(x==3){
        printf("three");
        printf("\n");
    }
    if(x==4){
        printf("four");
        printf("\n");
    }
    if(x==5){
        printf("five");
        printf("\n");
    }
    if(x==6){
        printf("six");
        printf("\n");
    }
    if(x==7){
        printf("seven");
        printf("\n");
    }
    if(x==8){
        printf("eight");
        printf("\n");
    }

    if(x==0){
        printf("zero");
        printf("\n");
    }
    if(x==9){
        printf("nine");
        printf("\n");
    }

}
