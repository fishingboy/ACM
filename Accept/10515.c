#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int big_mod(char *n, int circle)
{
    int len, i, d;

    if (circle == 0) return 0;
    if (circle == 1) return 1;

    len = strlen(n);
    d = 0;
    for (i=0; i<len; i++)
    {
        d = ((n[i] - '0') + (d * 10)) % circle;
    }
    
    return (d == 0) ? circle : d;
}

int main()
{
    char m[105], n[105];
    int i, j, number, m1, n1, mlen, nlen; 
    int v[10][10] = {0}, circle[10] = {0};

    for (number=0; number<10; number++)
    {
        v[number][0] = 1;
        for (i=1; ; i++)
        {
            v[number][i] = (v[number][i-1] * number) % 10;
            if (i > 1 && v[number][i] == number)
            {
                break;
            }
            circle[number]++;
        }
    }


    while (scanf("%s %s", m, n) == 2)
    {
        mlen = strlen(m);
        nlen = strlen(n);
        m1 = m[strlen(m)-1] - '0';
        n1 = big_mod(n, circle[m1]);

        if (mlen == 1 && nlen == 1 && m[0] == '0' && n[0] == '0') break;
        if (mlen == 1 && m[0] == '0') { printf("0\n"); continue; }
        if (nlen == 1 && n[0] == '0') { printf("1\n"); continue; }
        printf("%d\n", v[m1][n1]);
	}    

    return 0;
}
