#include <stdio.h>
#include <string.h>

int main()
{
    char str[210];
    int i, len, result, output;
    while (scanf("%s", &str) == 1)
    {
        if (strcmp(str, "*") == 0)
        {
            break;
        }

        result = 0;
        output = 0;
        len = strlen(str);
        for (i=1; i<len; i++)
        {
            switch (str[i])
            {
                case 'W':
                    result += 64;
                    break;
                case 'H':
                    result += 32;
                    break;
                case 'Q':
                    result += 16;
                    break;
                case 'E':
                    result += 8;
                    break;
                case 'S':
                    result += 4;
                    break;
                case 'T':
                    result += 2;
                    break;
                case 'X':
                    result += 1;
                    break;
                case '/':
                    output += (result == 64) ? 1 : 0;
                    result = 0;
                    break;
            }
        }
        printf("%d\n", output);
    }
    return 0;
}
