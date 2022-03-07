#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a);
float recursiveFunction(int num, int power , int startpower );
void main()
{
    int x,y ;
    printf("Enter Number and power : \n");
    scanf("%d%d",&x,&y);
    float ans = recursiveFunction(x,y,);
    printf(" = %f",ans);
}
float recursiveFunction(int x, ){
    if(num <=1){
        return  x;
    }
    esle if(num%2==0){
        return
    }
}
int fact(int a)
{
    if(a<2){
        return a;
    }
    else{
        return a*fact(a-1);
    }
}
