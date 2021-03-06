#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void pp(char x[15])
{
    int i, len, t;
    len = strlen(x);
    t = 15 - len;

    for (i = 14; i >= t; i --)
    {
        x[i] = x[i - t];
    }
    for (i = 0; i <= t - 1; i ++)
    {
        x[i] = 48;
    }
    x[15] = 0;
}

main()
{
    int f;
    int i, sum;
    int aa, bb;
    char a[15];
    char b[15];

    /*freopen("10035.in", "r", stdin);*/

    while (cin >> a >> b)
    {
        if (strcmp(a, "0") == 0 && strcmp(b, "0") == 0) break;

        pp(a);
        pp(b);
        f = sum = 0;

        for (i = strlen(a); i > 0; i --)
        {
            aa = a[i - 1] - 48;
            bb = b[i - 1] - 48;
            f = aa + bb + f;
            if (f >= 10)
            {
                sum ++;
                f = 1;
            }
            else
            {
                f = 0;
            }
        }
        if (sum == 0)
            cout << "No carry operation.\n";
        else if (sum == 1)
            cout << "1 carry operation.\n";
        else
            cout << sum << " carry operations.\n";
    }
}
