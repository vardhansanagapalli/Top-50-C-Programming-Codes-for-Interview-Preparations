#include <stdio.h>

int main()
{
    int hours[7];
    int i, salary = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &hours[i]);
    }
    for (i = 0; i < 7; i++)
    {
        if (i == 6)
        {
            salary = salary + hours[i] * 100 * 1.25;
        }

        else if (i == 0)
        {
            salary = salary + hours[i] * 100 * 1.5;
        }
        else
        {
            salary = salary + hours[i] * 100;
        }
        if (hours[i] > 8)
        {
            salary = salary + (hours[i] - 8) * 15;
        }
    }
    printf("%d\n", salary);
}
