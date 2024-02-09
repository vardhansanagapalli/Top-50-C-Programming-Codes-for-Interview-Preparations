#include <stdio.h>

int main()
{
    int balltot, runtot, runsecured, ballsdone;
    scanf("%d%d%d%d", &balltot, &runtot, &runsecured, &ballsdone);
    int totalOvers = balltot / 6;
    int remainingBalls = balltot % 6;
    float oversFinished = (ballsdone / 6) + (float)(ballsdone % 6) / 10.0;
    float currentRunRate = runsecured / oversFinished;
    float totalRunRate = runtot / (totalOvers + (float)remainingBalls / 10.0);
    if (currentRunRate > totalRunRate)
    {
        printf("%d\n", totalOvers);
        printf("%.1f\n", oversFinished);
        printf("%.1f\n", currentRunRate);
        printf("%.1f\n", totalRunRate);
        printf("Eligible to Win\n");
    }
    else
    {
        printf("%d\n", totalOvers);
        printf("%.1f\n", oversFinished);
        printf("%.1f\n", currentRunRate);
        printf("%.1f\n", totalRunRate);
        printf("Not Eligible to Win\n");
    }
}
