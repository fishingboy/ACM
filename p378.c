#include <stdio.h>

int main()
{
    int i, n;
    double m1, m2, d1, d2;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double x, y;	    

    scanf("%d",&n);
    
    printf("INTERSECTING LINES OUTPUT\n");

    for (i=1;i<=n;i++)
    {
		scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);

        m1 = (y1 - y2) / (x1 - x2);
        m2 = (y3 - y4) / (x3 - x4);
        d1 = y1 - (m1 * x1);
        d2 = y3 - (m2 * x3);

        printf("m1=%lf, d1=%lf\n", m1, d1);
        printf("m2=%lf, d2=%lf\n", m2, d2);
    }

    printf("END OF OUTPUT\n");

    return 0;
}