#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, vans;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        vans = 0;
        if (i % 2 == 0)
        {
            vans = pow(i, 2) - 2;
            printf("%d ", vans);
        }
        else
        {
            vans = pow(i, 2) - 1;
            printf("%d ", vans);
        }
    }
}