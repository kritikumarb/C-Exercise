#include <stdio.h>
#include <conio.h>
void main()
{
    int row = 4;
    int col = 5;
    int arr[row][col];
    int *p = &arr[0][0];
    int i;
    for (i = 0; i < row * col; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < row; i++)
    {
        for (int x = 0; x < col; x++)
        {
            printf("%d ", *(p + x)+i);
            
        }
        printf("\n");
    }

    getch();
}
