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
    float ans = recursiveFunction(x,y,1);
    printf(" = %f",ans);
}
float recursiveFunction(int num,int power,int startpower ){
    printf("%d^%d/factof(%d)*",num,startpower,power);
    if(power <= startpower){
        return num;
    }
    return ((pow(num , startpower)/fact(startpower)) - recursiveFunction(num , power , startpower+2));
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
