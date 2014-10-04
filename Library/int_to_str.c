void int_to_str(char *str, int n)
{
    int i, j, tmp[30], length=0;
    while (n > 0)
    {
        tmp[length++] = n % 10;
        n /= 10;
    }

    
    for (i=length-1, j=0; i>=0; i--, j++)
    {
        str[j] = tmp[i] + '0';
    }
    str[length] = 0;
}
