#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    for (num2 = 1; num2 < num1; num2++)
    {
        printf("\n%d * %d = %d", num2, num1, num1 * num2);
    }
}