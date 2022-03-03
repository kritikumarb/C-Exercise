#include<stdio.h>
#include<conio.h>
void main()
{ 
    int size,i,j,m;
    printf("enter size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter items into array : \n");

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Items in array are\t:\t");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<size;i++){
        for(j =0;j<size;j++){
            if(a[i]==a[j] && i!=j){
                for(m=i;m<size-1;m++){
                    a[m] = a[m+1];
                }
                size--;
            }


        }
    }
    printf("\nItems in array after cut are\t:\t");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    
}