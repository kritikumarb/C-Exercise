#include<stdio.h>
#include<conio.h>
int n=0;
void showMatrix(int a[n][n],int b[n][n] , int c){
    int i,j;
    
    printf("Items in matrix are : \n");
    printf("Matrix A \t\t\t\t Matrix B\n");
    printf("---------\t\t\t\t----------\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
void multiplication(int a[n][n],int b[n][n],int len){
    int i,j,k;
    int mul[len][len];
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            mul[i][j] = 0;
        }
    }
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            for(k=0;k<len;k++){
                mul[i][j] = mul[i][j] + (a[i][k] * b[j][k]);
            }
        }
    }

    printf("Items in matrix are : \n");
    printf("Matrix A \t\t\t\t Matrix B \t\t\t\t Multiplication\n");
    printf("---------\t\t\t\t----------\t\t\t\t----------------\n");
    for(i=0;i<n;i++){
        for(j=0;j<len;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}
void add(int a[n][n] , int b[n][n], int len){
    int i,j;
    int c[len][len];
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            c[i][j]=a[i][j]+b[i][j];

        }
    }
    printf("Matrix A \t\t\t\t Matrix B \t\t\t\t Addition \n");
    printf("---------\t\t\t\t----------\t\t\t\t----------------\n");
    for(i=0;i<n;i++){
        for(j=0;j<len;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void sub1(int a[n][n] , int b[n][n], int len){
    int i,j;
    int c[len][len];
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            c[i][j]=a[i][j]-b[i][j];

        }
    }
    printf("Matrix A \t\t\t\t Matrix B \t\t\t\t Substraction A-B\n");
    printf("---------\t\t\t\t----------\t\t\t\t----------------\n");
    for(i=0;i<n;i++){
        for(j=0;j<len;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",b[i][j]);
        }
        
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void sub2(int a[n][n] , int b[n][n], int len){
    int i,j;
    int c[len][len];
    
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            c[i][j]=b[i][j]-a[i][j];

        }
    }
    printf("Matrix A \t\t\t\t Matrix B \t\t\t\t Substraction B-A\n");
    printf("---------\t\t\t\t----------\t\t\t\t----------------\n");
    for(i=0;i<n;i++){
        for(j=0;j<len;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",b[i][j]);
        }
        
        printf("\t\t");
        for(j=0;j<len;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void main()
{ 
    int i,j,k,o;
    printf("Enter size of matrix : ");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf("Enter Items into matrix A : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter items into matrix B : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    while(1){
    printf("Menu for using operator in matrix : \n");
    printf("1) A + B \n2) A - B \n3) B - A \n4)A * B");
    printf("\nEnter a Choice : ");
    scanf("%d",&o);
    switch(o){
        case 1: add(a,b,n);
        break;
        case 2: sub1(a,b,n);
        break;
        case 3: sub2(a,b,n);
        break;
        case 4: multiplication(a,b,n);
        break;
        default : printf("Enter a valid choice");
    }
    }
}