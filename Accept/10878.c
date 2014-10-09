#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[20];
    int i, sum;

    gets(s);
    while (gets(s))
    {
        if (s[0] == '_') break;
        sum = 0;
        for (i = 2; i <= 5; i++)
        {
            if (s[i] == 'o') sum += (int) pow(2, 6 - i + 2);
        }
        for (i = 7; i <= 9; i++)
        {
            if (s[i] == 'o') sum += (int) pow(2, 7 - i + 2);
        }
        printf("%c", sum);
    }
    return 0;
}
