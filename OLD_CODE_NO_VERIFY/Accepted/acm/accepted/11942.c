#include <stdio.h>

int main()
{
    int t, i, j, a, b, prev_f, f, result;

    printf("Lumberjacks:\n");
    fscanf(stdin, "%d", &t);
    for (i=0; i<t; i++)
    {
        prev_f = 0; result = 1;
        fscanf(stdin, "%d", &a);
        
        for (j=1; j<10; j++)
        {
            fscanf(stdin, "%d", &b);
            f =(a > b) ? 1 : -1;
            if (f != prev_f && prev_f) result = 0;
            a = b;
            prev_f = f;
        }

        if (result == 1)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
