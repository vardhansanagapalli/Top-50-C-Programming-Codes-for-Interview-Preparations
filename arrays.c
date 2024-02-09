#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int array1[n1], array2[n2];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }
    if (n1 == n2)
    {
        for (int i = 0; i < n1; i++)
        {
            if (array1[i] < array2[i])
            {
                printf("Incompatible");
                return 0;
            }
        }
        printf("Compatible");
    }
    else
    {
        printf("Incompatible");
    }
}
