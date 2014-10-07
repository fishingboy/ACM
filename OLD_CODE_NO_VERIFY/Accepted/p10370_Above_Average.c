#include <stdio.h>

int main(){
	double sum,avg;
	double a[1000]={0};
	int i,n,t;
	int an,an2;

	/* freopen("p10370.in","r",stdin); */

	scanf("%d",&n);
	for(t=1;t<=n;t++){
		scanf("%d",&an);
		sum = 0;
		for (i=0;i<an;i++){
			scanf("%lf",&a[i]);
			sum += a[i];
		}
		avg = sum / an;
		an2 = 0;
		for (i=0;i<an;i++){
			if(a[i]>avg) an2++;
		}
		printf("%.3lf\%%\n",(double)an2/an*100);
	}
	return 0;
}