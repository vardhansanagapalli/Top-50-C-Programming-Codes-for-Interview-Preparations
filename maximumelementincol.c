#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        int max = mat[0][j];
        for (int i = 1; i < m; i++)
        {
            if (mat[i][j] > max)
            {
                max = mat[i][j];
            }
        }
        printf("%d\n", max);
    }
    return 0;
}