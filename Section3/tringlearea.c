#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 
    int side1 , side2 , side3, s;
    float area;
    printf("Enter 3 sides of the tringle : \n");
    scanf("%d %d %d",&side1,&side2,&side3);
    s = (side1 +  side2 + side3)/2;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("Area of the Tringle is : %.2f",area);
}