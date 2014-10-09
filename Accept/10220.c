#include <stdio.h>

#define int_max 10000
#define int_length 4
int ans[1000] = {0}, ans_t;

int main()
{
    int i, j, n, sum;

    /* init... */
    /*for(i=0;i<1000;i++) ans[i]=0;*/

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
        sum = 0;
        for (i = ans_t; i >= 0; i--)
        {
            if (ans[i])
            {
                for (j = 1; ans[i] > 0; j++)
                {
                    sum += ans[i] % 10;
                    ans[i] /= 10;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}