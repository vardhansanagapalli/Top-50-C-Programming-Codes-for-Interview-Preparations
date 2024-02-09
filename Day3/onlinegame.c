#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int l = 0, r = n - 1;
    while (l < r)
    {
        while (arr[l] % 2 == 0 && l < r)
            l++;
        while (arr[r] % 2 != 0 && l < r)
            r--;
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++, r--;
    }
    printf("Array after Segregation\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}