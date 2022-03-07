#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void sort(int *p, int s);
void main(){
    int *p;
    int n;
    printf("Enter Size of array : ");
    scanf("%d",&n);
    p = (int *)malloc(n*(sizeof(int)));
    printf("Enter Elements into array : \n");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        printf("%d \t",*(p+i));
    }
    printf("\n");
    printf("\n");
    sort(p,n);
    printf("\n");
    printf("\n");


}
void sort(int *p, int s){
    int *ptr = p;
    int i,j;
    printf("Size of S : %d\n",s);
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(*(ptr+i)<*(ptr+j)){
                int temp =*(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<s;i++){
        printf("%d \t",*(ptr+i));
    }
    printf("\nThe Largest Number is : %d",*(ptr+(s-1)));
    printf("\nThe Smallest Number is : %d",*(ptr+0));

}
