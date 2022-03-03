#include<stdio.h>
#define PI 3.14
void main(){
    int r;
    printf("Enter Radius of circle : \n");
    scanf("%d",&r);
    float area = PI * r * r;
    float peri = 2 * PI * r;
    printf("Area  is %.2f and Perimeter is %.2f",area,peri);
}
