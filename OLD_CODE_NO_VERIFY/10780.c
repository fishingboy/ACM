#include <stdio.h>

long gcd(long x,long y){	
	long temp;
	while (y != 0){		
		temp = y;
		y = x % y;
		x = temp;		
	}
	return temp;
}

long main(){
	unsigned long i,j,t,n,m;
	unsigned long sum,max;

	scanf("%ld",&t);

	for (i=1;i<=t;i++){
		sum = 1;max = 0;
		scanf("%ld %ld",&m,&n);
		for (j=1;j<=n;j++){
			if (sum==0)scanf("%ld",&n);
			if (gcd(m,j)!=1) sum *=j;
			printf("sum=%d\n",sum);
			if (sum % m ==0){
				while(sum>m){
					if (sum % m ==0){
						max++;
						sum /= m;
					}else{
						break;
					}					
					if (gcd(m,sum)==1) sum=1;
				}
			}
		}
		printf("CASE %ld:\n",i);
		printf("%ld\n",max);
	}
}