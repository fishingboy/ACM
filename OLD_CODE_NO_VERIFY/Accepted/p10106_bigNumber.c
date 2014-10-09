#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define int_length 4
#define int_max 10000
int a[100], b[100], ans[200];

void bigMul();
int charToint(char *s, int *a);

int main()
{
    int i;
    char s1[300], s2[300];

    for (i = 0; i < 100; i++) a[i] = b[i] = 0;
    for (i = 0; i < 200; i++) ans[i] = 0;

    while (scanf("%s %s", s1, s2) == 2)
    {
        bigMul(s1, s2);
    }
    return 0;
}

/* BigNumber MUL*/
void bigMul(char *s1, char *s2)
{
    int ai, bi, i, j, temp, f;

    ai = charToint(s1, a);
    bi = charToint(s2, b);

    for (i = 0; i <= ai; i++)
    {
        for (j = 0; j <= bi; j++)
        {
            temp = a[i] * b[j];
            ans[i + j] += temp % int_max;
            ans[i + j + 1] += temp / int_max;
        }
    }
    
    for (i = 0; i < ai + bi; i++)
    {
        ans[i + 1] += ans[i] / int_max;
        ans[i] = ans[i] % int_max;
    }

    f = 0;
    for (i = ai + bi; i >= 0; i--)
    {
        if (ans[i] != 0 && f == 0)
        {
            printf("%d", ans[i]);
            f = 1;
        }
        else if (f)
        {
            printf("%0*d", int_length, ans[i]);
        }
    }
    if (f == 0) printf("0");
    printf("\n");

    for (i = 0; i <= ai; i++) a[i] = 0;
    for (i = 0; i <= bi; i++) b[i] = 0;
    for (i = 0; i <= ai + bi; i++) ans[i] = 0;
}

/* Cut string to array...*/
int charToint(char *s, int *a)
{
    int i, j, ai;
    char temp_int[int_length + 1];
    memset(a, 0, sizeof (int) * (strlen(s) + 1));

    ai = 0;
    for (i = strlen(s); i >= 0; i -= int_length)
    {
        if (i >= int_length)
        {
            for (j = 0; j < int_length; j++) temp_int[j] = s[i + j - int_length];
        }
        else
        {
            for (j = 0; j < i; j++) temp_int[j] = s[j];
        }
        temp_int[j] = '\0';
        a[ai++] = atoi(temp_int);
    }
    return ai - 1;
}