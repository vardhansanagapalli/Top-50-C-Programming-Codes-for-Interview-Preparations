#include <stdio.h>
int main()
{
    int n, row, column;
    scanf("%d", &n);
    row = (n - 1) / 3;
    column = (n - 1) % 3;
    printf("%d %d\n", row, column);
    return 0;
}
