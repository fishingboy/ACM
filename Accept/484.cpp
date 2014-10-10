#include <iostream>
#include <cstring>

using namespace std;

main()
{
    long a[10000];
    long asum[10000];
    long t = 0;
    long n, i, j;

    while (cin >> n)
    {
        for (i = 1; i <= t; i++)
        {
            if (a[i] == n) break;
        }
        if (i > t)
        {
            t++;
            a[t] = n;
            asum[t] = 1;
        }
        else
        {
            asum[i]++;
        }
    }
    for (i = 1; i <= t; i++)
    {
        cout << a[i] << " " << asum[i] << "\n";
    }
}
