#include <stdio.h>
int main()
{
    int num, power, temp, result = 1;
    scanf("%d", &num);
    scanf("%d", &power);
    temp = power;
    while (power != 0)
    {
        result = result * num;
        power--;
    }
    printf("The value of %d power %d is %d", num, temp, result);
}