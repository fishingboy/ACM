#include <stdio.h>

int main()
{
    int i, a[10000] = {0}, n, count, temp;
    int x;

    count = 0;
    while (scanf("%d", &n) == 1)
    {
        count++;
        a[count] = n;
        for (i = count - 1; i > 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            else break;
        }

        x = (count + 1) / 2;
        if (count % 2 == 1)
        {
            printf("%d\n", a[x]);
        }
        else
        {
            printf("%d\n", (a[x] + a[x + 1]) / 2);
        }
    }
    return 0;
}