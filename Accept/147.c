#include <stdio.h>

int main()
{
	double coin[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
	long long int a[30001], n, m, x;
	int i, j;

	for (i=0; i<=30000; i++) a[i]=1;	
	for (i=1;i<=10;i++)
    {
		for (j=1;j<=30000;j++)
        {
			if (j>=coin[i]) a[j] = a[j] + a[(int)(j-coin[i])];
		}
	}

	/* use scanf("%d.%d") load float */
	while (scanf("%d.%d",&n, &m) == 2)
    {
        if (n == 0 && m == 0) break;
        x = n * 100 + m;
		printf("%3d.%02d%17lld\n", n, m, a[x]);
	}
    return 0;
}
