#include <stdio.h>
int main()
{
    int num, check = 1;
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            check = 0;
            break;
        }
    }
    if (check)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
}
