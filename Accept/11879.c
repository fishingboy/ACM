#include <stdio.h>
#include <string.h>

int big_mod(char *n, int m)
{
    int len, i, d;

    if (m == 0) return 0;
    if (m == 1) return 0;

    len = strlen(n);
    d = 0;
    for (i=0; i<len; i++)
    {
        d = ((n[i] - '0') + (d * 10)) % m;
    }
    
    return d;
}

int main()
{
    int f;
	char n[110];
	
    while (scanf("%s", n) == 1)
    {
    	if (strcmp(n, "0") == 0) break;
        f = (big_mod(n, 17) == 0) ? 1 : 0;
        printf("%d\n", f);
    }    

    return 0;
}
