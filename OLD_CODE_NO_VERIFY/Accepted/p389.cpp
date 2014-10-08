#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

unsigned long bval(char a[10], int b)
{
    int i, l, t = 0, m = 0;
    unsigned long bb = 0, sum = 0;
    l = strlen(a);
    for (i = l - 1; i >= 0; i --)
    {
        if (isdigit(a[i]) != 0)
        {
            m = a[i] - '0';
        }
        else
        {
            m = a[i] - 'A' + 10;
        }
        bb = pow(b, t);
        t ++;
        sum = sum + m*bb;
    }
    return sum;
}

void p(unsigned long val, int base)
{
    char s[10] = "       ";
    int t = 0;
    long b;
    t = 0;

    if (base == 10)
    {
        printf("%7ld\n", val);
    }
    else
    {
        while (1 == 1)
        {
            t ++;
            b = val % base;
            val = (val - b) / base;

            if (b >= 0 && b <= 9)
            {
                s[6 - t + 1] = '0' + b;
            }
            else
            {
                s[6 - t + 1] = 'A' + b - 10;
            }

            if (val == 0) break;
            if (t > 7) break;
        }

        if (t > 7)
        {
            cout << "  ERROR\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
}

main()
{
    char s[10];
    int b1, b2;
    unsigned long v;

    while (cin >> s >> b1 >> b2)
    {
        v = bval(s, b1);
        p(v, b2);
    }
}