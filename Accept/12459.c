#include <stdio.h>

int main()
{
    int n, i;
    long long int a[81];
    

    a[0] = 1;
    a[1] = 1;
    for (i=2; i<=80; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    while (scanf("%d", &n) == 1)
    {
        if (n == 0) break;
        printf("%lld\n", a[n]);
    }

    return 0;
}
