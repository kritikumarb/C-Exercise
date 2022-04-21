#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void SparseMatrix(int mati[][3])
{

    int row, col;
    row = mati[0][0];
    col = mati[0][1];
    int sparse[row][col];
    int nzero = mati[0][2];
    for (int i = 0; i < nzero + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",mati[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sparse[i][j] = 0;
        }
    }
    for (int i = 1; i < nzero+1; i++)
    {
        sparse[mati[i][0]][mati[i][1]] = mati[i][2];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }
}
void main()
{

    int mat[100][3];
    int row, col, nzero;
    printf("Enter the number of rows of the matrix\n");
    scanf("%d", &row);
    printf("Enter the number of columns of the matrix\n");
    scanf("%d", &col);
    printf("Enter the number of non zero element\n");
    scanf("%d", &nzero);
    mat[0][0] = row;
    mat[0][1] = col;
    mat[0][2] = nzero;
    printf("Enter the matrix in three tuple form(%d X 3 form)\n", row);
    for (int i = 1; i < nzero + 1; i++)
    {
        printf("%d ROW \n", i);
        scanf("%d", &mat[i][0]);
        scanf("%d", &mat[i][1]);
        scanf("%d", &mat[i][2]);
    }
    printf("\n");
    for (int i = 0; i < nzero + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    SparseMatrix(mat);

    // transpose(sparse,row);
}