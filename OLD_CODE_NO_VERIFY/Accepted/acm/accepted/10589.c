#include <stdio.h>
#include <math.h>

double length(double x1, double y1, double x2, double y2)
{
    return pow(pow(x1-x2, 2) + pow(y1-y2, 2), 0.5);
}

int in_area(double n, double x, double y)
{
    int i;
    double pos_x[4] = {0, 0, n, n};
    double pos_y[4] = {0, n, 0, n};

    for (i=0; i<4; i++)
    {
        if (length(x, y, pos_x[i], pos_y[i]) > n) return 0;
    }
    return 1;
}

int main()
{
    double i, n, m, x, y, a;
    while (fscanf(stdin, "%lf %lf", &n, &a))        
    {
        if (n == 0.0) break;
        m = 0.0;
        for (i=0; i<n; i++)
        {
            fscanf(stdin, "%lf %lf", &x, &y);
            if (in_area(a, x, y) == 1) m++;
        }
        printf("%.5lf\n", a * a * m / n);
    }
    return 0;
}
