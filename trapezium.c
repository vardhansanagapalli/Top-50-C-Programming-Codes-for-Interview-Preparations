#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, l;
    scanf("%d", &n);
    int a = 1, b = (n * n) + 1;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < n - i; j++)
            printf("--");
        for (k = 0; k < i; k++)
        {
            printf("%d*", a++);
        }
        for (l = 0; l < i - 1; l++)
        {
            printf("%d*", b++);
        }
        printf("%d", b);
        b = b - 2 * (i - 1);
        printf("\n");
    }
}
