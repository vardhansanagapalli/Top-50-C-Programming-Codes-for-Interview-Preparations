#include <stdio.h>
int main()
{
    int n, oddcol = 0, evencol = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] % 2 == 0)
                evencol++;
            else
                oddcol++;
        }
    }
    if (oddcol == n * n || evencol == n * n)
        printf("Yes");
    else
        printf("No");
    return 0;
}