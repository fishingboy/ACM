#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *ss;
    char *string;
    char str[100];
    int sum, be, i, ans;
    string = str;

    while (gets(string))
    {
        sum = be = 0;
        ss = strtok(string, " \t\n");
        for (i = 0; i < strlen(ss); i++)
        {
            ans = isalpha(ss[i]);
            if (ans != 0 && be == 0)
            {
                sum++;
            }
            be = isalpha(ss[i]);
        }

        while (ss = strtok(NULL, " \t\n"))
        {
            be = 0;
            for (i = 0; i < strlen(ss); i++)
            {
                ans = isalpha(ss[i]);
                if (ans != 0 && be == 0)
                {
                    sum++;
                }
                be = isalpha(ss[i]);
            }
        }
        printf("%d\n", sum);
    }
}
