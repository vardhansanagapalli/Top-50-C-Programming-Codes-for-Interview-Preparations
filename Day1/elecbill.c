#include <stdio.h>
int main()
{
    int unit_cost, n, bill;
    scanf("%d", &n);
    if (n <= 200)
    {
        printf("Rs.%d", n / 2);
    }
    if (n > 200 && n <= 400)
    {
        unit_cost = 0.65;
        bill = unit_cost * n + 100;
        printf("Rs.%d", bill);
    }
    if (n > 400 && n <= 600)
    {
        unit_cost = 0.8;
        bill = unit_cost * n + 200;
        printf("Rs.%d", bill);
    }
    if (n > 600)
    {
        unit_cost = 1.25;
        bill = unit_cost * n + 425;
        printf("Rs.%d", bill);
    }
}