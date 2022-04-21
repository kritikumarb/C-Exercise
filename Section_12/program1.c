#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
union id
{
    char model[50];
    char code[50];
};
struct product
{
    union id mod;
    char name[50];
    float price;
};

void main()
{
    int s,i,j;
    struct product pro[5];
    for (i = 0; i < 1; i++)
    {
        printf("\nEnter Product %d :\n",i);
        printf("Press 1 for Model No Or else for Item code");
        scanf("%d",&j);
        if(j=1){
            printf("\nEnter Model No : ");
            scanf("%s",&pro[i].mod.model);
        }
        else{
            printf("\nEnter Item code : ");
            scanf("%s",&pro[i].mod.code);
        }
        printf("Enter Name of Product : ");
        scanf("%s",pro[i].name);
        printf("\nEnter Price of Product : ");
        scanf("%f",&pro[i].price);
    }
    for(i=0;i<1;i++){
        printf("Entered Item Details are : \n");
        if(j==1){
            printf("\nModel No : %s",pro[i].mod.model);
        }
        else{
            printf("\nItem Code : %s",pro[i].mod.code);
        }
        printf("\nProduct Name : %s",pro[i].name);
        printf("\nProduct Price : %.2f",pro[i].price);
    }
}
