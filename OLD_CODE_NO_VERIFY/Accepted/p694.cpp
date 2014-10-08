#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long val(double n, double limit)
{
    long t;
    for (t = 1; n != 1; t++)
    {
        if (fmod(n, 2) == 0)
        {
            n /= 2.0;
        }
        else
        {
            n = n * 3.0 + 1.0;
        }
        if (n > limit) break;
    }
    return t;
}

main()
{
    int t = 0;
    unsigned long v;
    double a, limit;

    while (cin >> a >> limit != NULL)
    {
        t++;
        if (a < 0) break;
        v = val(a, limit);
        cout << "Case 1: A = " << a << ", limit = " << limit;
        cout << ", number of terms = " << v << "\n";
    }
}