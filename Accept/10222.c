#include <stdio.h>

char encode[30] = "dmbgthjkpl;'.,[]eyfuonrvic";
char decode[30] = "abcdefghijklmnopqrstuvwxyz";

char decode_char(char c)
{
    int i;
    char encode_c;

    for (i=0; i<26; i++)
    {        
        if (encode[i] == c) return decode[i];
    }
    return c;
}

int main()
{
    char c;
    while (1)
    {
        c = getc(stdin);
        if (feof(stdin)) break;
        printf("%c", decode_char(c));
    }
    return 0;
}
