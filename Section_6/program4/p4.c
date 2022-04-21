#include <stdio.h>
#include <conio.h>
void main()
{
    int p, n, i, j;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Items into array : \n");
    //To scan items into array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //scan end

    //shows the array
    printf("\nItems in array are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    // end the array show

    //select a position
    while (1)
    {
        printf("\nEnter position where you want to add an item : ");
        scanf("%d", &p);
        p--;
        //increase array size by 1
        if (p < 0 || p > n)
        {
            printf("\n\nYou have insert an invalid location.\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", a[i]);
            }
            return;
        }
        else
        {
            n++;
            //repositioning the array
            for (i = n; i >= p; i--)
            {
                a[i] = a[i - 1];
            }
            printf("\n\nEnter the item you want to add at position %d :", p+1);
            scanf("%d", &j);
            //inserted the item into that array
            a[p] = j;
            printf("\nAfter insertion the array is : ");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", a[i]);
            }
        }
    }
}
