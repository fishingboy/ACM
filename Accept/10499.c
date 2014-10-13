#include <stdio.h>
int main()
{
    long n;
    while (scanf("%ld", &n), n > 0)
    {
        if (n == 1)
            printf("0%%\n");
        else    
            printf("%ld%%\n", n * 100 / 4);
    }
    return 0;
}
