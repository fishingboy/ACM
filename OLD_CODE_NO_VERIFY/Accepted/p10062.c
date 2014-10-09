#include <stdio.h>
#include <string.h>

int main()
{
    char s[2000];
    int a[1000];
    int p;
    int asum[1000];
    int i, j, t;

    while (gets(s))
    {
        if (strlen(s) == 0) continue;
        i = j = t = 0;
        for (i = 0; i <= strlen(s) - 1; i++)
        {
            for (j = 1; j <= t; j++)
            {
                if (a[j] == s[i]) break;
            }
            if (j > t)
            {
                t++;
                a[t] = (int) s[i];
                asum[t] = 1;
            }
            else
            {
                asum[j]++;
            }
        }

        for (i = 1; i <= t - 1; i++)
        {
            for (j = i + 1; j <= t; j++)
            {
                if (asum[i] > asum[j])
                {
                    p = a[i];
                    a[i] = a[j];
                    a[j] = p;
                    p = asum[i];
                    asum[i] = asum[j];
                    asum[j] = p;
                }
                else if (asum[i] == asum[j])
                {
                    if (a[i] < a[j])
                    {
                        p = a[i];
                        a[i] = a[j];
                        a[j] = p;
                    }
                }
            }
        }

        /* print */
        for (i = 1; i <= t; i++)
        {
            printf("%d %d\n", a[i], asum[i]);
        }
        printf("\n");
    }
    return 0;
}