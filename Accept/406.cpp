#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>

using namespace std;

int pri(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) break;
    }
    if (i > sqrt(n))
        return 1;
    else
        return 2;
}

main()
{
    int a[200] = {0};
    int t = 0;
    int n, c;
    int i, ct;
    int start;
    int total;

    for (i = 1; i <= 1000; i++)
    {
        if (pri(i) == 1)
        {
            t++;
            a[t] = i;
        }
    }
    total = t;

    while (cin >> n >> c != NULL)
    {
        cout << n << " " << c << ":";
        t = 0;
        for (i = 1; i <= total; i++)
        {
            if (a[i] > n) break;
            t++;
        }
        if (t % 2 == 1)
        {
            ct = c * 2 - 1;
            if (t <= ct)
            {
                for (i = 1; i <= t; i++)
                {
                    cout << " " << a[i];
                }
            }
            else
            {
                start = (t - ct) / 2 + 1;
                for (i = start; i <= start + ct - 1; i++)
                {
                    cout << " " << a[i];
                }
            }
        }
        else
        {
            ct = c * 2;
            if (t <= ct)
            {
                for (i = 1; i <= t; i++)
                {
                    cout << " " << a[i];
                }
            }
            else
            {
                start = (t - ct) / 2 + 1;
                for (i = start; i <= start + ct - 1; i++)
                {
                    cout << " " << a[i];
                }
            }
        }
        cout << "\n\n";
    }
}
