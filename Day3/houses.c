#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int houseNum;
    int pos;
} House;
int compare(const void *a, const void *b)
{
    House *house1 = (House *)a;
    House *house2 = (House *)b;
    return house1->pos - house2->pos;
}
int main()
{
    int num;
    scanf("%d", &num);

    House houses[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &houses[i].houseNum, &houses[i].pos);
    }
    qsort(houses, num, sizeof(House), compare);

    int maxDistance = 0;
    int house1, house2;
    for (int i = 0; i < num - 1; i++)
    {
        if (houses[i + 1].pos - houses[i].pos > maxDistance)
        {
            maxDistance = houses[i + 1].pos - houses[i].pos;
            house1 = houses[i].houseNum;
            house2 = houses[i + 1].houseNum;
        }
    }
    printf("%d %d\n", house1 < house2 ? house1 : house2, house1 > house2 ? house1 : house2);
}
