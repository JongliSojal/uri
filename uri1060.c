#include<stdio.h>

int main()

{
    double a, b, c, d, e, f;
    int count = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    if (a>0)
    {
        count = count + 1;
    }

    if (b>0)
    {
        count = count + 1;
    }
    if (c>0)
    {
        count = count + 1;
    }

    if (d>0)
    {
        count = count + 1;
    }

    if (e>0)
    {
        count = count + 1;
    }

    if (f>0)
    {
        count = count + 1;
    }

    printf("%d valores positivos\n", count);

    return 0;
}
