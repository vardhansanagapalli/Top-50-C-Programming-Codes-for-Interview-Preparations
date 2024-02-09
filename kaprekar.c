#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, divisor, digits, right, left;
    scanf("%d", &num);
    square = num * num;
    digits = 0;
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    divisor = pow(10, digits);
    right = square % divisor;
    left = square / divisor;
    if (right + left == num && right != 0)
        printf("Kaprekar Number\n");
    else
        printf("Not a Kaprekar Number\n");
}
