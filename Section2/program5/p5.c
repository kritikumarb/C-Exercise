#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 
    typedef int integer;
    typedef float decimal;
    decimal p,t,r;
    decimal si,ci;
    printf("Enter the principal value : ");
    scanf("%f",&p);
    printf("Enter time(year) : ");
    scanf("%f",&t);
    printf("Enter rate of intrest : ");
    scanf("%f",&r);
    si = (p*t*r)/100;
    ci = p * pow(1+ r/100,t) ;
    printf("Simple intrest : %.2f ",si);
    printf("\nCompound intrest : %.2f ",ci);

}