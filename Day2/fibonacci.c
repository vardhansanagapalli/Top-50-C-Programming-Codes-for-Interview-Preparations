#include <stdio.h>
int main()
{
    int a, b = 0, c = 1, n, nextterm = b + c;
    scanf("%d", &n);
    for (a = 3; a < n; a++)
    {
        b = c;
        c = nextterm;
        nextterm = b + c;
    }
    printf("%d\n", nextterm);
}