#include <stdio.h>
#include <math.h>
#include <string.h>

struct Rectangle
{
    double x1, y1;
    double x2, y2;
} a[10];

int main()
{
    int i, Rect_t = 0, t = 0, f;
    double x, y;
    char s[100];

    /*
    freopen("p476.in","r",stdin);
    freopen("p476.out","w",stdout);
     */

    /* input Rectangle*/
    while (gets(s))
    {
        if (s[0] == '*') break;
        sscanf(s, "%*c %lf %lf %lf %lf", &a[Rect_t].x1, &a[Rect_t].y1, &a[Rect_t].x2, &a[Rect_t].y2);
        Rect_t++;
    }

    /* input Point */
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        if (x == 9999.9 && y == 9999.9) break;
        t++;
        f = 0;
        for (i = 0; i < Rect_t; i++)
        {
            if (x > a[i].x1 && x < a[i].x2 && y < a[i].y1 && y > a[i].y2)
            {
                printf("Point %d is contained in figure %d\n", t, i + 1);
                f = 1;
            }
        }
        if (f == 0) printf("Point %d is not contained in any figure\n", t);
    }
    return 0;
}