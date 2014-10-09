#include <stdio.h>

int main()
{
    long int a, b, c;
    int f;

    while (scanf("%ld%ld", &a, &b) == 2)
    {
        f = 1;
        c = a;
        do
        {
            if (a == 0 || b == 1 || b == 0)
            {
                f = 0;
                break;
            }
            if (a % b == 0)
            {
                a = a / b;
            }
            else
            {
                f = 0;
                break;
            }
        } while (a != 1);

        if (f == 0)
        {
            printf("Boring!\n");
        }
        else
        {
            while (c > 1)
            {
                printf("%ld ", c);
                c = c / b;
            }
            printf("1\n");
        }
    }
    return 0;
}