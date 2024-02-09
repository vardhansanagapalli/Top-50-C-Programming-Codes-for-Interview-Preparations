#include <stdio.h>
int main()
{
    int n, evensum = 0, oddsum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            evensum += a[i];
        else
            oddsum += a[i];
    }
    printf("The sum of the even numbers in the array is %d\n", evensum);
    printf("The sum of the odd numbers in the array is %d", oddsum);
    return 0;
}