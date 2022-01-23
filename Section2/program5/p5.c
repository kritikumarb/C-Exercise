#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 
    typedef int integer;
    typedef float decimal;
    integer p,t,r;
    decimal si,ci;
    printf("Enter the principal value : ");
    scanf("%d",&p);
    printf("Enter time(year) : ");
    scanf("%d",&t);
    printf("Enter rate of intrest : ");
    scanf("%d",&r);
    si = (p*t*r)/100;
    ci = p*(pow(1+(r/100),t));
    printf("Simple intrest : %.2f ",si);
    printf("\nCompound intrest : %.2f ",ci);

}