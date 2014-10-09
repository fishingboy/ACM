#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100000], str2[100000];
    int i, j, len1, len2;
    int result;
    
    while (fscanf(stdin, "%s %s", str1, str2))
    {
        if (feof(stdin)) break;

        len1 = strlen(str1);
        len2 = strlen(str2);
        result = j = 0;
        for (i=0; i<len1; i++)
        {
            if (result != 0) break;
            for (; j<len2; j++)
            {
                if (str1[i] == str2[j])
                {
                    j++;
                    if (i == len1-1)
                    {
                        result = 1;
                    }
                    break;
                }
            }
            if (result == 0 && j == len2)
            {
                result = -1;
            }
        }
        
        if (result == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
