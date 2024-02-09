#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        printf("%d\n", n);
        count++;
    }
    printf("%d\n", count);
}
