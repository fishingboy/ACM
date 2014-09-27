#include <stdio.h>
#include <string.h>

char number[3][6] = {"one", "two", "three"};

void change_word(char *str)
{
    int len, len2, i, j, k, err_cnt;

    len =  strlen(str);
    for (j=0; j<3; j++)
    {
        len2 = strlen(number[j]);
        if (len != len2) continue;

        err_cnt = 0;
        for (k=0; k<len2; k++)
        {
            if (str[k] != number[j][k]) err_cnt++;
        }
        if (err_cnt <= 1)
        {
            printf("%d\n", j+1);
            break;
        }
    }
}


int main()
{
    int i, n;
    char str[6];

    fscanf(stdin, "%d", &n);
    for (i=0; i<n; i++)
    {
        fscanf(stdin, "%s", &str);
        change_word(str);
    }

    return 0;
}
