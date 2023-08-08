#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, p, q, k;
    int A[10][10], B[10][10], C[10][10];
    printf("\nEnter dimension of Matrix A:\n>> ");
    scanf("%d,%d", &m, &n);
    printf("\nEnter dimension of Matrix B:\n>> ");
    scanf("%d,%d", &p, &q);
    if (m != p || n != q)
    {
        printf("\n-- Entered Matrices are not operable. Please ensure that the matrices are dimensionally similar.\n");
        exit(0);
    }
    printf("\n\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        printf("\n+ Enter elements of Row %d -\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nEnter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
    {
        printf("\n+ Enter elements of Row %d -\n", i + 1);
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] > B[i][j]) {
                C[i][j] = A[i][j];
            }
            else {
                C[i][j] = B[i][j];
            }
        }
    }
    printf("\n\n-- The matrix after finding the largest of each corresponding element of the 2 matrices is:\n\n");
    for (i = 0; i < m; i++)
    {
        printf("|");
        for (j = 0; j < q; j++)
        {
            printf(" ");
            printf("%d", C[i][j]);
        }
        printf(" |\n");
    }
    printf("\n\n");
    return 0;
}
