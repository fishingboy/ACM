#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long q, s;
    long d, t;
    long i, j, n;
    double total, totalsum, tall;

    while (cin >> q >> s)
    {
        if (q == 0 && s == 0) break;
        if (q == 1 && s == 1)
        {
            cout << "0 1\n";
            continue;
        }
        if (q - 1 == s)
        {
            cout << "1 " << q + s << "\n";
            continue;
        }

        for (i = 2; i <= sqrt(q); i ++)
        {
            tall = q;
            t = 0;
            while (1)
            {
                t ++;
                d = ((long) tall) % i;
                if (d != 0) break;
                tall = tall / i;
                if (tall == 1 && pow(i - 1, t) == s)
                {
                    n = i - 1;
                    tall = q;
                    total = totalsum = 0;
                    for (j = 1; j <= t; j ++)
                    {
                        tall = q / (pow(n + 1, j - 1));
                        total = total + pow(n, j - 1);
                        totalsum = totalsum + tall * pow(n, j - 1);
                    }
                    totalsum = totalsum + s;
                    break;
                }
            }
        }
        printf("%0.lf %.0lf\n", total, totalsum);
    }
    return 0;
}
