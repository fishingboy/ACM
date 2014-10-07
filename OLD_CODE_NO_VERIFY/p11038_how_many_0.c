#include <stdio.h>
#include <math.h>

int pow10(int n){
	int i=0;
	while (n>=10){
		n /= 10;
		i++;
	}
	return i;
}

int main(){
	int m,n,temp,sum;
	int mi,ni;
	int i,j,p10;

	while(scanf("%d %d",&m,&n)==2){
		if(m<0 && n<0)break;
		if (m%10!=0) m = m + (10 - m % 10);
		if (n%10!=0) n = n - (n % 10);
		mi = pow10(m);
		ni = pow10(n);
		
		temp = m;sum=0;
		p10 = n / (int)pow(10,i)
		for(i=mi;i<=ni;i++){
			if(i==ni)
				sum += i * (p10);
			else
				sum += i * 9 * ni;
		}
		
		printf("%d %d\n",mi,ni);
		sum = (n-m)/10+1;
		printf("%d\n",sum);
	}	
	return 0;
}