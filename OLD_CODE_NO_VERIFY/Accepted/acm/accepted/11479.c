#include <stdio.h>

int main()
{
    int i, n;
    long long int x, y, z;

    fscanf(stdin, "%d", &n);
    for (i=0; i<n; i++)
    {
        fscanf(stdin, "%lld %lld %lld", &x, &y, &z);
        if (x >= y+z)
        {
            printf("Case %d: Invalid\n", i+1);
            continue;
        }
        
        if (y >= x+z)
        {
            printf("Case %d: Invalid\n", i+1);
            continue;
        }

        if (z >= x+y)
        {
            printf("Case %d: Invalid\n", i+1);
            continue;
        }
        
        if (x == y && y == z)
        {
            printf("Case %d: Equilateral\n", i+1);
            continue;
        }
        
        if (x == y || y == z || x == z)
        {
            printf("Case %d: Isosceles\n", i+1);
            continue;
        }
            
        printf("Case %d: Scalene\n", i+1);
    }

    return 0;
}
