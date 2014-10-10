#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long val(long n, long limit)
{
    long t;
    for (t = 1; n != 1; t++)
    {
        if (fmod(n, 2) == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        if (n > limit) break;
    }
    return t;
}

main()
{
    int t = 0;
    long v, a, limit;

    while (cin >> a >> limit)
    {
        t++;
        if (a < 0) break;
        v = val(a, limit);
        cout << "Case " << t << ": A = " << a << ", limit = " << limit;
        cout << ", number of terms = " << v << "\n";
    }
}