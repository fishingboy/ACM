#include <stdio.h>

int maxx, maxy;
int way[10][10];
char s[10][10];

void go(int x, int y, int t)
{
    if (x < 0 || x > maxx - 1 || y < 0 || y > maxy - 1)
    {
        printf("%d step(s) to exit\n", t);
    }
    else if (way[x][y] != 999)
    {
        printf("%d step(s) before a loop of %d step(s)\n", way[x][y], t - way[x][y]);
    }
    else
    {
        way[x][y] = t;
        t++;
        if (s[x][y] == 'S')
        {
            go(x + 1, y, t);
        }
        else if (s[x][y] == 'N')
        {
            go(x - 1, y, t);
        }
        else if (s[x][y] == 'W')
        {
            go(x, y - 1, t);
        }
        else if (s[x][y] == 'E')
        {
            go(x, y + 1, t);
        }
        way[x][y] = 999;
    }
}

int main()
{
    int i, j, start;

    while (scanf("%ld %ld %ld", &maxx, &maxy, &start) == 3)
    {
        if (maxx == 0) break;
        for (i = 0; i <= maxx - 1; i++)
        {
            scanf("%s", &s[i]);
        }

        /*  Clear Array... */
        for (i = 0; i <= 9; i++)
        {
            for (j = 0; j <= 9; j++)
            {
                way[i][j] = 999;
            }
        }
        go(0, start - 1, 0);
    }
    return 0;
}