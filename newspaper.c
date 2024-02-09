#include <stdio.h>
int main()
{
    int a, b, c, cp, sp, total, profit;
    scanf("%d%d%d", &a, &b, &c);
    cp = a * c;
    sp = a * b;
    total = sp - cp;
    profit = total - 100;
    printf("%d", profit);
}