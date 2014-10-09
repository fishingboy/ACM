#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

main()
{
    int n;
    int i, j, nn;
    char a[200];
    char s[200];
    int asum[200];
    int at = 0;
    int p;

    scanf("%d", &n);
    n ++;
    for (nn = 1; nn <= n; nn ++)
    {
        gets(s);

        for (i = 0; i < strlen(s); i ++)
        {
            if (isalpha(s[i]) != 0)
            {
                s[i] = toupper(s[i]);
                for (j = 1; j <= at; j ++)
                {
                    if (s[i] == a[j])
                    {
                        asum[j] ++;
                        break;
                    }
                }
                if (j > at)
                {
                    at ++;
                    a[at] = s[i];
                    asum[at] = 1;
                }
            }
        }
    }

    for (i = 1; i <= at - 1; i ++)
    {
        for (j = i + 1; j <= at; j ++)
        {
            if (asum[i] < asum[j])
            {
                p = a[i];
                a[i] = a[j];
                a[j] = p;
                p = asum[i];
                asum[i] = asum[j];
                asum[j] = p;
            }
            else if (asum[i] == asum[j] && a[i] > a[j])
            {
                p = a[i];
                a[i] = a[j];
                a[j] = p;
                p = asum[i];
                asum[i] = asum[j];
                asum[j] = p;

            }
        }
    }

    for (i = 1; i <= at; i ++)
    {
        cout << a[i] << " " << asum[i] << "\n";
    }
}