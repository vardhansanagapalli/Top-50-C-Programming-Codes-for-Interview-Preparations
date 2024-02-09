#include <stdio.h>
#include <math.h>
int main()
{
    float value;
    int round_up, round_down;
    scanf("%f", &value);
    round_down = floor(value);
    round_up = ceil(value);
    printf("%d", round_down);
    printf("\n%d", round_up);
}