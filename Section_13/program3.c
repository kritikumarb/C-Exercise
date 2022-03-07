#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 void main()
 {
    int *ptr1,*ptr2,i=0,*x,*y,*z;
    char ch ='y';
    ptr1 =(int*)malloc(sizeof(int));
    printf("\nEnter for First array\n");

    while(ch =='y'||ch =='Y')
    {
        printf("\nEnter the element %d : ",i+1);
        scanf("%d",ptr1+i);
        i++;
        printf("\nDo u want to enter more elements ? ");
        ch = getche();
        ptr1 = (int*)realloc(ptr1 , sizeof(int)*(i+1));
     }

    ch='y';
    int j =0;
    ptr2 =(int*)malloc(sizeof(int));
    printf("\nEnter for second array\n");
    while(ch =='y'||ch =='Y')
    {
        printf("\nEnter the element %d : ",i+1);
        scanf("%d",ptr2+j);
        j++;
        printf("\nDo u want to enter more elements ? ");
        ch = getche();
        ptr2 = (int*)realloc(ptr2 , sizeof(int)*(j+1));
    }
    x=ptr1;
    int a,b;
    int temp=0;
    for(a=0;a<i;a++){
        for(b=a;b<i;b++){
            if(*(x+a) > *(x+b)){
                temp = *(x+a);
                *(x+a) = *(x+b);
                *(x+b) = temp;
            }
        }
    }
    printf("\n\n");
    for(a=0;a<i;a++){
        printf("%d \t",*(ptr1+a));
    }

    y = ptr2;
    for(a=0;a<i;a++){
        for(b=a;b<i;b++){
            if(*(y+a) > *(y+b)){
                temp = *(y+a);
                *(y+a) = *(y+b);
                *(y+b) = temp;
            }
        }
    }
    printf("\n\n");
    for(a=0;a<j;a++){
        printf("%d \t",*(ptr2+a));
    }
    z = (int *)malloc(sizeof(int)*(i+j));

    for(a=0;a<i;a++){
        *(z+a) = *(x+a);
    }
    for(a=0;a<j;a++){
        *(z+i+a) = *(y+a);
    }
    printf("\n\n");
    for(a=0;a<i+j;a++){
        printf("%d\t",*(z+a));
    }

    getch();
 }
