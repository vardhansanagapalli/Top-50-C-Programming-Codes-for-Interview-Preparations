#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum1 += a[i];
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        sum2 += b[i];
    }
    if (sum1 == sum2 && n == m)
        printf("Same");
    else
        printf("Not Same");

    return 0;
}