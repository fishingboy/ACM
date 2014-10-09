#include <stdio.h>

int main()
{
    int i, n, x, y, z;

    fscanf(stdin, "%d", &n);
    for (i=0; i<n; i++)
    {
        fscanf(stdin, "%d %d %d", &x, &y, &z);
        if (x >= y+z)
        {
            printf("Wrong!!\n");
            continue;
        }
        
        if (y >= x+z)
        {
            printf("Wrong!!\n");
            continue;
        }

        if (z >= x+y)
        {
            printf("Wrong!!\n");
            continue;
        }
            
        printf("OK\n");
    }

    return 0;
}
