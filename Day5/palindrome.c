#include <stdio.h>
int main()
{
    char a[20];
    scanf("%s", &a);
    int c = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        c++;
    }
    int i = 0, j = c - 1, f = 0;
    while (i < j)
    {
        if (a[i] != a[j])
            f = 1;
        i++, j--;
    }
    if (f == 0)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}