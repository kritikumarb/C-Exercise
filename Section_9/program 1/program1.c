#include <stdio.h>
#include <conio.h>
void main()
{
    int row = 4;
    int col = 5;
    int p[row][col];
    int i;
     for (i = 0; i < row; i++)
    {
        for (int x = 0; x < col; x++)
        {
            scanf("%d ", *(p + i)+x);
            
        }
    }
    for (i = 0; i < row; i++)
    {
        for (int x = 0; x < col; x++)
        {
            printf("%d ", *(*(p + i)+x));
            
        }
        printf("\n");
    }

    getch();
}
