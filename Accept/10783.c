#include <stdio.h>

int main()
{
    int i, j, a, b, n, sum;
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        scanf("%d %d", &a, &b);
        a = (a % 2 == 1) ? a : a + 1;
        sum = 0;
        for (i = a; i <= b; i += 2) sum += i;
        printf("Case %d: %d\n", j, sum);
    }
    return 0;
}