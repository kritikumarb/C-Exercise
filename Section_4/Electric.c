#include <stdio.h>
#include <conio.h>
void main()
{
    int ur;
    float final;
    char name[50];
    printf("Enter Customer name : ");
    scanf("%[^\n]s", name);
    printf("Enter No Of Units used by ' %s ': ", name);
    scanf("%d", &ur);
    if (ur > 0)
    {
        if (ur >= 400)
        {
            final = (200 * 0.80) + (100 * 1.30) + ((ur - 300) * 2.00);
        }
        else if (ur >= 300)
        {
            final = (200 * 0.80) + (100 * 1.30) + ((ur - 300) * 2.00);
        }
        else if (ur >= 200)
        {
            final = (200 * 0.80) + ((ur - 200) * 1.30);
        }
        else if (ur < 200)
        {
            final = ur * 0.80;
        }
    }
    else
    {
        printf("Enter A Valid Unit");
    }
    if (final > 400)
    {
        final = final + (final * 0.15);
    }
    printf("\nUserName : %s\nTotal Unit Used  : %d\nTotal Charge : %f", name, ur, final + 100);
}