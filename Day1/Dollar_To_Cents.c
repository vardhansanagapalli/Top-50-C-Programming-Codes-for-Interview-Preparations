#include <stdio.h>

int main()
{
    int a, b, c, d, tot, centtot;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    tot = a + c;
    centtot = b + d;
    tot = tot + centtot / 100;
    centtot = centtot % 100;

    printf("%d\n%d", tot, centtot);

    return 0;
}
