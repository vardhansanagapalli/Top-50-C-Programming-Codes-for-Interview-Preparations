#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int num = m; num <= n; num++)
    {
        int sum = (num / 10) + (num % 10);
        int product = (num / 10) * (num % 10);
        if (sum + product == num)
        {
            printf("%d\n", num);
        }
    }
}
