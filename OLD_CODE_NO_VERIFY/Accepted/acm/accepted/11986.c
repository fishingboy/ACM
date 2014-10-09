#include <stdio.h>
#include <math.h>

int main()
{
    long long int t, i, j, sum;
    long long int n;

    fscanf(stdin, "%lld", &t);
    for (i=0; i<t; i++)
    {
        fscanf(stdin, "%lld", &n);
        if (n == 0)
        {
            printf("Case %lld: 0\n", i+1);
            continue;
        }
        for (j=1; ; j++)
        {
            if (pow(2, j) > n) break;
        }
        printf("Case %lld: %lld\n", i+1, j);
    }
    return 0;
}
