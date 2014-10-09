#include <stdio.h>

long long int digit_sum(long long int n)
{
    long long int sum;

    sum = n;
    while (n >= 10)
    {
        sum = 0;
        while (n > 0)
        {
           sum += n % 10;
           n /= 10;
        }
        n = sum;
    }
    return sum;
}

int main()
{
    long long int n;
    while (fscanf(stdin, "%lld", &n), n>0)
    {
        printf("%lld\n", digit_sum(n));
    }
    return 0;
}
