#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a);
float recursiveFunction(int num, int power , int count);
void main()
{ 
    
    int num = 3;
    int count = 2; b

    int power = 3;

    float ans = recursiveFunction(num , power, count);
    printf("Ans is : %d",ans);
}
int fact(int a){
    if(a==0||a==1){
        return 1;
    }
    {
        return a*fact(a-1);
    }
    
}

float recursiveFunction(int num, int power , int count ){
    if(count<=1){
        return num;
    }
    float ans1 = pow(num , power) / fact(power);
    if(count%2 == 1 ){
        count--;
        return ans1-recursiveFunction(num , power+2,count);
    }
    else{
        
        return ans1+recursiveFunction(num , power+2 , count=(count-1));
    }

    

}