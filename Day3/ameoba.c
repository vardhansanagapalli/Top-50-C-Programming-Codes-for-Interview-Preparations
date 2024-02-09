#include <stdio.h>
int multip(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{

    int n;
    scanf("%d", &n);
    printf("%d", multip(n));

    return 0;
}