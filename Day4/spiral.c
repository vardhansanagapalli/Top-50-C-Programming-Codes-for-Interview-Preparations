#include <stdio.h>

#define MAX_SIZE 10

void spiralTraversal(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int direction = 0;

    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
                printf("%d ", matrix[top][i]);
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
                printf("%d ", matrix[i][right]);
            right--;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }
        else if (direction == 3)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    spiralTraversal(matrix, n);

    return 0;
}
