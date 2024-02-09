#include <stdio.h>

int main()
{
    int rows, cols, treeNumber;
    scanf("%d", &rows);
    scanf("%d", &cols);
    scanf("%d", &treeNumber);
    if (treeNumber <= rows || treeNumber % rows == 1 || treeNumber % rows == 0)
        printf("Yes");
    else
        printf("No");
}
