#include <stdio.h>

int main()
{
    int n, arr[100], nonrep[100], k = 0;
    scanf("%d", &n);
    if (n >= 100)
    {
        printf("Invalid Input\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int dup = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i] == nonrep[j])
            {
                dup = 1;
                break;
            }
        }
        if (!dup)
        {
            nonrep[k++] = arr[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", nonrep[i]);
    }
}
