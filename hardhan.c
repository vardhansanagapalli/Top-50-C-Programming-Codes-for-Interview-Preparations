#include <stdio.h>

int main()
{
    int num, originalNum, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &num);

    originalNum = num;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    if (originalNum % sum == 0)
    {
        printf("Hardhan Number\n");
    }
    else
    {
        printf("Not Hardhan Number\n");
    }
}
