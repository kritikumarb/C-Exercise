#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float phy, chem, math, per;
    printf("Enter your marks :-");
    printf("\nPhysics :");
    scanf("%f", &phy);
    printf("\nChemistry :");
    scanf("%f", &chem);
    printf("\nMathematics :");
    scanf("%f", &math);

    per = (phy + chem + math) / 3.0;

    printf("Your Percentage is %f", per);
    if (per <= 100 && per >= 70)
    {
        printf("\n 1st division");
    }
    else if (per <= 69 && per >= 50)
    {

        printf("\n 2nd division");
    }
    else if (per <= 49 && per >= 30)
    {

        printf("\n 3rd division");
    }
    else if (per < 30)
    {

        printf("\n Fail");
    }
    else
    {
        printf("\nInvalid Input");
    }
    return 0;
}