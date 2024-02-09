#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    int l = 0, r = n - 1;
    while (l < r)
    {
        printf("%d %d\n", a[r], a[l]);
        l++, r--;
    }
    if (n % 2 != 0)
        printf("%d 0", a[l]);
    return 0;
}