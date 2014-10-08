#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

void pp(char x[], int l)
{
    int i, len, t;
    len = strlen(x);
    t = l - len;

    for (i = l - 1; i >= t; i--)
    {
        x[i] = x[i - t];
    }
    for (i = 0; i <= t - 1; i++)
    {
        x[i] = 48;
    }
    x[l] = 0;
}

int sval(char m)
{
    return m - '0';
}

void lmul(char a[], int b, char c[], int l)
{
    int i;
    unsigned long d, cy = 0;
    for (i = l - 1; i >= 0; i--)
    {
        d = sval(a[i]);
        c[i] = (d * b + cy) % 10 + '0';
        cy = (d * b + cy) / 10;
    }
    c[l] = 0;
}

void lprint(char s[])
{
    int i, be = 0;
    int t = 0;
    char m;


    for (i = 0; i <= strlen(s) - 1; i++)
    {
        m = s[i];
        if (be == 0 && m != '0') break;
    }
    for (; i <= strlen(s) - 1; i++)
    {
        t++;
        cout << s[i];
    }
}

void chs(char s1[], char s2[])
{
    int i;
    for (i = 0; i <= strlen(s2); i++)
    {
        s1[i] = s2[i];
    }
}

int ilen(int i)
{
    if (i < 10) return 1;
    if (i < 100) return 2;
    if (i < 1000) return 3;
    if (i < 10000) return 4;

}

main()
{
    char a[10000], ans[10000];

    int n;
    int f;
    int i;
    int maxl;


    while (cin >> n != NULL)
    {
        a[0] = '1';
        a[1] = 0;
        for (i = 1; i <= n; i++)
        {
            maxl = strlen(a) + ilen(i);
            pp(a, maxl);
            lmul(a, i, ans, maxl);
            chs(a, ans);
        }
        cout << n << "!\n";
        lprint(a);
        cout << "\n";
    }
}