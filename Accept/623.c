#include <stdio.h>

#define int_max 10000
#define int_length 4
int ans[1000] = {0}, ans_t;

int main()
{
    int i, j, f, n;

    while (scanf("%d", &n) == 1)
    {
        /*  cal  */
        ans[0] = 1;
        ans_t = 0;
        for (i = 2; i <= n; i++)
        {
            for (j = 0; j <= ans_t; j++) ans[j] *= i;
            for (j = 0; j <= ans_t; j++)
            {
                if (ans[j] >= int_max)
                {
                    ans[j + 1] += ans[j] / int_max;
                    ans[j] %= int_max;
                    ans_t = (j + 1 > ans_t) ? j + 1 : ans_t;
                }
            }
        }

        /* print answer */
        printf("%d!\n", n);
        f = 0;
        for (i = ans_t; i >= 0; i--)
        {
            if (ans[i] != 0 && f == 0)
            {
                printf("%d", ans[i]);
                f = 1;
            }
            else if (f == 1)
            {
                printf("%0*d", int_length, ans[i]);
            }
            ans[i] = 0;
        }
        printf("\n");
    }
    return 0;
}