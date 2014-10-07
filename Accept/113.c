#include <stdio.h>
#include <math.h>

int main()
{
	double n, k;
	while (scanf("%lf %lf", &n, &k) == 2)
    {
		printf("%.0lf\n", pow(k ,(double)1/n));
	}
    return 0;
}