#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Please Enter the values that first and last digits should be added: ");
    scanf("%d", &a);
    b = a % 10;
    printf("\nThe value of Last digit is %d", b);
    while (a >= 10)
    {
        a = a / 10;
    }
    c = a;
    printf("\nThe value of First digit is %d", c);
    sum = b + c;
    printf("\nThe Sum of First digit and last digit is %d", sum);
}
