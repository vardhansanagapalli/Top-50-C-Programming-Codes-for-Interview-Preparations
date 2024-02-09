#include <stdio.h>
#include <string.h>

int main()
{

    char a[10][10];
    int n = 0;
    while (1)
    {
        scanf("%s", a[n]);
        if (strcmp(a[n], "####") == 0)
            break;
        n++;
    }

    printf("%s\n", a[0]);
    int i = 0, j = 1;
    while (i < n - 1)
    {
        char l = a[i][strlen(a[i]) - 1];
        if (l == a[j][0])
        {
            printf("%s\n", a[j]);
        }
        else
            break;
        i++, j++;
    }
}
