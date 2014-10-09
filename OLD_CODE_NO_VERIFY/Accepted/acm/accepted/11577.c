#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n, i, j, max, word[26];
    char c;

    fscanf(stdin, "%d\n", &n);
    for (i=0; i<n; i++)
    {
        max = 0;
        for (j=0; j<26; j++) word[j] = 0;

        while (fscanf(stdin, "%c", &c), c!='\n')        
        {
            c = tolower(c);
            if (c >= 'a' && c <= 'z')
            {
                word[c-'a']++;
            }
        }

        for (j=0; j<26; j++)
        {
            if (word[j] > max) max = word[j];
        }
        
        for (j=0; j<26; j++)
        {
            if (word[j] == max) printf("%c", j+'a');
        }
        printf("\n");
    }

    return 0;
}
