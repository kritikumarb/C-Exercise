#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n,i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    
    int a[n][n];
    printf("Enter items into matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)    {
            printf("%d * %d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }   
        printf("\n");
    }
    printf("After cutting the lower triangle : \n");
    for(i=0;i<n;i++){
        for(int s=1;s<=i;s++){
                printf("\t");
            }
        for(j=0;j<n;j++){
            
            if(i*j >= i*i){
                printf("%5d\t",a[i][j]);
            }
        }
        
        printf("\n");
    }
    
}