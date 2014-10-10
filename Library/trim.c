void trim(char *str)
{
    int i, length;
    
    /* left trim */
    length = strlen(str);
    for (i = 0; i <= length - 1; i++)
    {
        if (str[i] != ' ') break;
    }
    strncpy(str, str + i, length - i);
    str[length - i] = 0;
    
    /* right trim */
    length = strlen(str);
    for (i = length - 1; i >= 0; i--)
    {
        if (str[i] != ' ') break;
    }    
    str[i+1] = 0;        
}
