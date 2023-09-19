//* Finding the row sum of a matrix

#include <stdio.h>

int main()
{
    int i, j, m, n, a[50][50];
    printf("\n>> Enter dimensions of the Matrix:\n>> ");
    scanf("%d,%d", &m, &n);
    if (m != n)
    {
        printf("\n-- Enter dimensions for a square matrix\n");
        exit(0);
    }
    int row_sum[m], col_sum[n], dig_sum[m];
    printf("\n>> Enter the elements:");
    for (i = 0; i < m; i++)
    {
        row_sum[i] = 0;
        printf("\n+ Enter elements of Row %d:\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            row_sum[i] += a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        col_sum[i] = 0;
        for (j = 0; j < m; j++)
        {
            col_sum[i] += a[j][i];
        }
    }
    for (i = 0; i < n; i++)
    {
        dig_sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            if (i == j){
                dig_sum[i] = a[i][j] + a[i][n - i - 1];
            }
        }
    }
    printf("\n\n>> The Matrix is:\n\n");
    for (i = 0; i < m; i++)
    {
        printf("\n|\t");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("|\t=\t%d", row_sum[i]);
    }
    for (i = 0; i < m; i++) {
        if ((row_sum[i] == col_sum[i]) == dig_sum[i]) {

        }
    }
    printf("\n\n");
    return 0;
}
