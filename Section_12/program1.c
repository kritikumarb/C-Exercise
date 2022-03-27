#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

union product{
    char name[50];
    char icode[50];
    float price;
};

void main(){
    int s;
    union product pro;
    while(1){
        printf("\nEnter what you want to enter :\n1)Name\n2)Item Code\n3)Price");
        scanf("%d",&s);
    switch(s){
    case 1:
        printf("\nEnter Product Name : ");
        scanf("%s",pro.name);
        printf("You Have entered name : %s",pro.name);
        break;

    case 2:
        printf("\nEnter Item Code :");
        scanf("%s",pro.icode);
        printf("You Have entered Item Code  : %s",pro.icode);
        break;
    case 3:
        printf("\nEnter Price: ");
        scanf("%f",&pro.price);
        printf("You Have entered price : %f",pro.price);
        break;
    default:
        printf("Enter a correct Choice");
        exit (0);
}
    }

}
