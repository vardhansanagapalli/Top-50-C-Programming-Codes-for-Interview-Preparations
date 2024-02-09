#include <stdio.h>

void insertcard(int size, int cards[], int position, int newcard)
{
    if (position < 1 || position > size + 1)
    {
        printf("Invalid Input\n");
        return;
    }

    for (int i = size; i >= position; i--)
    {
        cards[i] = cards[i - 1];
    }
    cards[position - 1] = newcard;
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
    int position, newcard;
    scanf("%d", &position);
    scanf("%d", &newcard);
    insertcard(size, cards, position, newcard);
}
