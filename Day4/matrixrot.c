#include <stdio.h>
#define MAX 100
void rotateMatrix(int mat[][MAX], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][N - 1 - j];
            mat[i][N - 1 - j] = temp;
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int matrix[MAX][MAX];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    rotateMatrix(matrix, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
