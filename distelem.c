#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int c = 1, j = 0;
    for (int i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
                break;
        }
        if (j == -1)
            c++;
    }
    printf("There are %d distinct element in the array.", c);
    return 0;
}