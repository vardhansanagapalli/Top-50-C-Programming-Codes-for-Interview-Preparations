#include <stdio.h>
int main()
{
    float a, b, c, interest, totwithint, disc, totdisc, cordisc;
    scanf("%f%f%f", &a, &b, &c);
    interest = (a * b * c) / 100;
    printf("%.2f", interest);
    totwithint = interest + a;
    printf("\n%.2f", totwithint);
    disc = 0.02;
    cordisc = disc * interest;
    printf("\n%.2f", cordisc);
    totdisc = totwithint - cordisc;
    printf("\n%.2f", totdisc);
}