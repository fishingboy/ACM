#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>

using namespace std;

long long int bval(char *a, int b)
{
    long long int i, l, t = 0, m = 0;
    long long int bb = 0, sum = 0, flag=1;
    l = strlen(a);

    flag = (a[0] == '-') ? -1 : 1;
    for (i = l - 1; i >= 0; i --)
    {
        if (a[i] == '-')
        {
            flag = -1;
            continue;
        }
        else if (isdigit(a[i]) != 0)
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
    return flag * sum;
}

void p(long long int val, int base)
{
    char s[10] = "       ";
    int t = 0;
    long long int b, flag=1;

    if (val < 0)
    {
        flag = -1;
        val *= -1;
    }

    while (1 == 1)
    {
        t++;
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

        if (val == 0) 
        {
            if (flag == -1)
            {
                s[6 - t] = '-';
            }
            break;
        }
        if (t > 7) break;
    }

    if (t > 7 || (t > 6 && flag == -1))
    {
        cout << "  ERROR\n";
    }
    else
    {
        cout << s << "\n";
    }
}

main()
{
    char s[1000];
    long long int b1, b2;
    long long int v;

    while (cin >> s >> b1 >> b2)
    {
        v = bval(s, b1);
        p(v, b2);
    }
}