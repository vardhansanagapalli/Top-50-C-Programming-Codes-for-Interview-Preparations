#include <stdio.h>
int main()
{
    int n, sq1 = 0, sq2 = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sq1 = sq1 + a[i][j];
            if (i + j == n - 1)
                sq2 = sq2 + a[i][j];
        }
    }
    if (sq1 == sq2)
        printf("Yes");
    else
        printf("No");
    return 0;
}