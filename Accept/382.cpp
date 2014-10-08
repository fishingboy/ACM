#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

main()
{
    long n, sum;
    long i;
    cout << "PERFECTION OUTPUT\n";
    while (cin >> n, n != 0)
    {
        sum = 1;
        for (i = 2; i <= n / 2; i ++)
        {
            if (n % i == 0) sum = sum + i;
        }
        printf("%5ld", n);
        if (n == 1) sum = 0;
        if (sum == n)
            cout << "  PERFECT\n";
        else if (sum > n)
            cout << "  ABUNDANT\n";
        else
            cout << "  DEFICIENT\n";
    }
    cout << "END OF OUTPUT\n";

}