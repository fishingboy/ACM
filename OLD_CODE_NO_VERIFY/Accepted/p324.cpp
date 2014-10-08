#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int sum[9];

void pp(char x[], int l)
{
    int i, len, t;
    len = strlen(x);
    t = l - len;

    for (i = l - 1; i >= t; i --)
    {
        x[i] = x[i - t];
    }
    for (i = 0; i <= t - 1; i ++)
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
    for (i = l - 1; i >= 0; i --)
    {
        d = sval(a[i]);
        c[i] = (d * b + cy) % 10 + '0';
        cy = (d * b + cy) / 10;
    }
    c[l] = 0;
}

void digadd(char s[])
{
    int i, be = 0;
    char m;
    
    /* clear ! */
    for (i = 0; i <= 9; i ++)
    {
        sum[i] = 0;
    }


    for (i = 0; i <= strlen(s) - 1; i ++)
    {
        m = s[i];
        if (be == 0 && m != '0') be = 1;
        if (be == 1)
        {
            if (m == '0') sum[0] ++;
            if (m == '1') sum[1] ++;
            if (m == '2') sum[2] ++;
            if (m == '3') sum[3] ++;
            if (m == '4') sum[4] ++;
            if (m == '5') sum[5] ++;
            if (m == '6') sum[6] ++;
            if (m == '7') sum[7] ++;
            if (m == '8') sum[8] ++;
            if (m == '9') sum[9] ++;
        }
    }
}

void chs(char s1[], char s2[])
{
    int i;
    for (i = 0; i <= strlen(s2); i ++)
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
    char a[2000], ans[2000];

    int n;
    int f;
    int i;
    int maxl;

    while (scanf("%d\n", &n))
    {
        if (n == 0) break;
        a[0] = '1';
        a[1] = 0;
        for (i = 2; i <= n; i ++)
        {
            maxl = strlen(a) + ilen(i);
            pp(a, maxl);
            lmul(a, i, ans, maxl);
            chs(a, ans);
        }
        digadd(a);

        printf("%d! --\n", n);
        for (i = 0; i <= 9; i ++)
        {
            printf("   (%d)%5d ", i, sum[i]);
            if (i == 4) printf("\n");
        }
        printf("\n");
    }
}