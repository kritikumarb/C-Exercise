#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 
    int p,t,r;;
    float si,ci;
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