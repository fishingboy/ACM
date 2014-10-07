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
