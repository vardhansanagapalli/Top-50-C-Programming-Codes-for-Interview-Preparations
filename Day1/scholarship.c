#include <stdio.h>
int m main()
{
    int age, passout, income, arrears;
    float score, attendance;

    scanf("%d %d %d %d %f %f", &age, &passout, &income, &arrears, &score, &attendance);

    if (age >= 18 && age < 21 && passout >= 2021 && income <= 200000 && arrears <= 2 && score >= 60 && attendance >= 80)
    {
        printf("Eligible");
    }
    else if (passout >= 2021 && income >= 200000 && income < 250000 && arrears > 2 && score >= 80 && attendance >= 90)
    {
        printf("Partially Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
}