#include <stdio.h>
#include <conio.h>
void main()
{
    int n, m, t;
    int i, j, temp;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    t = n;
    int a[n];
    int copy[n];
    printf("Enter items into array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        a[i] = temp;
        copy[i] = temp;
    }
    printf("\nValues before filter : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", copy[i]);
    }
    //array to remove same value from a copy

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (copy[i] == copy[j] && i != j)
            {

                for (m = j; m < n; m++)
                {
                    copy[m] = copy[m + 1];
                }
                n--;
            }
        }
    }
    printf("\nValues after filter : ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", copy[i]);
    }
    //compare copy array with real array and store value in another array
    int freq[n];
    for (i = 0; i < n; i++)
    {
        //assign o to all frequencdy values
        freq[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < t; j++)
        {
            if (copy[i] == a[j])
            {
                freq[i] = freq[i] + 1;
            }
        }
    }
    printf("\n Frequency are : ");
    printf("\n Number  ::  Frequency");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t",copy[i]);
        printf(" ||\t %d", freq[i]);
    }
}