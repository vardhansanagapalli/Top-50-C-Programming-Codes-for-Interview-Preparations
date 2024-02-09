#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int grp[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &grp[i]);
    }
    int buses = 0;
    int capacity = 0;
    for (int i = 0; i < n; ++i)
    {
        if (capacity + grp[i] <= m)
        {
            capacity = capacity + grp[i];
        }
        else
        {
            buses++;
            capacity = grp[i];
        }
    }

    if (capacity > 0)
    {
        buses++;
    }
    printf("%d\n", buses);
    return 0;
}
