#include <stdio.h>

int main()
{
    int num, reversed = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", reversed);
    return 0;
}
