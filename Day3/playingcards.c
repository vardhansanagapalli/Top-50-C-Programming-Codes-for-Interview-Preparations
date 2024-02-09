#include <stdio.h>

int insertcard(int size, int cards[], int posn, int newcd)
{
    if (posn < 1 || posn > size + 1)
    {
        printf("Invalid Input\n");
    }
    for (int i = size; i >= posn; i--)
    {
        cards[i] = cards[i - 1];
    }
    cards[posn - 1] = newcd;
    printf("Array after insertion is\n");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d\n", cards[i]);
    }
}
int main()
{
    int size;

    scanf("%d", &size);

    int cards[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &cards[i]);
    }

    int posn, newcd;

    scanf("%d", &posn);

    scanf("%d", &newcd);

    insertcard(size, cards, posn, newcd);
}