#include <stdio.h>

int main()
{
    long n, t, i;
    long int sum;

    while (scanf("%ld", &n) == 1)
    {
        sum = 1;
        for (i = 1;; i++)
        {
            if (sum % n == 0) break;
            sum = sum % n;
            sum = sum * 10 + 1;
        }
        printf("%ld\n", i);
    }
    return 0;
}