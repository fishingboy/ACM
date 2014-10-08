#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

double val(double n)
{
    double t;
    for (t = 1;; t ++)
    {
        if (fmod(n, 2) == 0)
        {
            n /= 2.0;
        } else
        {
            n = n * 3.0 + 1.0;
        }
        if (n == 1) break;
    }
    return t;
}

main()
{
    double m, n;
    double max, maxn;
    double p, mm, nn;
    int d;
    double v;
    double i;

    while (cin >> m >> n != NULL)
    {
        d = 1;
        if (m == 0 && n == 0) break;
        mm = m;
        nn = n;
        if (mm > nn)
        {
            p = mm;
            mm = nn;
            nn = p;
        }
        max = 0;
        for (i = mm; i <= nn; i ++)
        {
            v = val(i);
            if (v > max)
            {
                max = v;
                maxn = i;
            }
        }
        printf("Between %.0lf and %.0lf, ", mm, nn);
        printf("%.0lf generates the longest sequence of %.0lf values.\n",
                maxn, max);

    }
}