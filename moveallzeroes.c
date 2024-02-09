#include <stdio.h>
#include <math.h>
void move(int n)
{
    int c = 0, op = 0;
    while (n)
    {
        if (n % 10 == 1)
            op = op * 10 + 1;
        else
            c++;
        n = n / 10;
    }
    op = op * pow(10, c);
    printf("%d\n", op);
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &n);
        move(n);
        t--;
    }
    return 0;
}