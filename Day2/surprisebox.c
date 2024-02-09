#include <stdio.h>

int main()
{
    int box1, box2, box3;
    scanf("%d %d %d", &box1, &box2, &box3);
    int secondLargest = (box1 > box2 && box1 < box3) || (box1 < box2 && box1 > box3) ? box1 : (box2 > box1 && box2 < box3) || (box2 < box1 && box2 > box3) ? box2
                                                                                                                                                           : box3;
    int code = 1;
    for (int i = 1; i <= box1 && i <= box2 && i <= box3; ++i)
    {
        if (box1 % i == 0 && box2 % i == 0 && box3 % i == 0)
        {
            code = i;
        }
    }
    printf("The treasure is in the box which has the number %d\n", secondLargest);
    printf("The code to open the box is %d\n", code);
}
