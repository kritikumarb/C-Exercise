#include<stdio.h>
#include<conio.h>

void fun(int *sum , float *avg);

void main()
{
    int sum;
    float avg;
    fun(&sum , &avg);
    printf("SUM : %d\nAVG : %.2f",sum , avg);
}
void fun(int *sum , float *avg){
    int i, count=0, x=0;
    printf("Check");
    for(i=100;i<=300;i++){
        x= x + i;
        count++;
    }
    *sum = x;
    *avg = x/count;
}
