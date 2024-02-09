#include <stdio.h>

int main()
{
    int num, ognum, rem, sum = 0;
    scanf("%d", &num);
    ognum = num;
    while (num != 0)
    {
        int fact = 1;
        rem = num % 10;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == ognum)
        printf("Yes\n");
    else
        printf("No\n");
}
