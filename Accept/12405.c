#include <stdio.h>

int main()
{
    int case_n, n, i, j, size, count;
    char str[101];

    fscanf(stdin, "%d", &case_n);
    
    for (i=0; i<case_n; i++)
    {
        fscanf(stdin, "%d", &n); 
        fscanf(stdin, "%s", str);
        
        size = count = 0;
        for (j=0; j<n; j++)
        {
            if (str[j] == '.')
            {
                count++;
                j += 2;
            }
        }
        printf("Case %d: %d\n", i+1, count);
    }
    return 0;
}
