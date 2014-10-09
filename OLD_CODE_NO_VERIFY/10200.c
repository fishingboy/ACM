#include <stdio.h>
#include <math.h>

int main()
{
    long i, no[10001], n, pn;
    long a, b;
    double pc = 0;

    for (i = 0; i <= 10000; i++) no[i] = 1;
    for (i = 40; i <= 1000; i = i + 41)
    {
        no[i] = 0;
        no[i + 1] = 0;
        no[i + 4] = 0;
        no[i + 9] = 0;
        no[i + 16] = 0;
        no[i + 25] = 0;
        no[i + 36] = 0;
    }

    while (scanf("%ld %ld", &a, &b) == 2)
    {
        n = pn = 0;
        n = b - a + 1;
        for (i = a; i <= b; i++)
        {
            if (no[i] == 1)
            {
                pn++;
            }
            else
            {
                printf("%ld\n", i);
            }
        }
        pc = (double) pn / (double) n * 100;
        printf("%1.2lf\n", pc);
    }
    return 0;
}