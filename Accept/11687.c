#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char x[1000005];

    while (scanf("%s", x) == 1, strcmp(x, "END") != 0)
    {
        i = 0;
        while (strcmp(x, "1") != 0)
        {
            i++;
            sprintf(x, "%d", strlen(x));
        };
        printf("%d\n", i+1);
    }

    return 0;
}
