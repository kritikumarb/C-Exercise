#include <stdio.h>
#include <conio.h>
void main()
{
    int total, math, chem, phy;
    printf("Enter Marks\n");
    printf("Enter Math : ");
    scanf("%d", &math);
    printf("Enter Physuics : ");
    scanf("%d", &phy);
    printf("Enter Chemistry : ");
    scanf("%d", &chem);
    total = math + phy + chem;
    if (total >= 200)
    {
        printf("Admitted");
    }
    else if (math >= 60 && phy >= 50 && chem >= 40)
    {
        printf("Admitted");
    }
    else
    {
        printf("Not Admitted");
    }
}