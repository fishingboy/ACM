#include <stdio.h>

int main()
{
    int k, n, m, x, y, i;

    while (fscanf(stdin, "%d", &k), k>0)
    {
        fscanf(stdin, "%d %d", &n, &m);
        for (i=0; i<k; i++)
        {
            fscanf(stdin, "%d %d", &x, &y);
            if (n == x || m == y)
                printf("divisa\n");
            else if (x<n && y>m)
                printf("NO\n");
            else if (x>n && y>m)
                printf("NE\n");
            else if (x<n && y<m)
                printf("SO\n");
            else if (x>n && y<m)
                printf("SE\n");
        }
    }

    return 0;
}
