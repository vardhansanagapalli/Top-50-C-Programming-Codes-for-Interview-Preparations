#include <stdio.h>

int main()
{
    long long int num, sum = 0;
    scanf("%lld", &num);
    while (num > 9)
    {
        sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    printf("%lld\n", num);
}
