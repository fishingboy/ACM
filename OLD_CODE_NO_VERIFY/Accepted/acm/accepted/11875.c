#include <stdio.h>
#include <math.h>

int main()
{
    int n, people_count, age[11], x, i, j, k, avg;

    fscanf(stdin, "%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(stdin, "%d", &people_count);
        for (j = 0; j < people_count; j++)
        {
            fscanf(stdin, "%d", &age[j]);
        }

        avg = people_count / 2 + 1;
        for (j = 0; j < people_count; j++)
        {
            x = 0;
            for (k = 0; k < people_count; k++)
            {
                if (abs(x) > avg) break;
                if (age[j] > age[k])
                    x++;
                else if (age[j] < age[k])
                    x--;
            }
            if (x == 0)
            {
                printf("Case %d: %d", i + 1, age[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
