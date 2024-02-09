#include <stdio.h>
int main()
{
    int a, i, j, size;
    scanf("%d", &size);
    int array[300];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}