#include <stdio.h>
#include <string.h>
#include <math.h>

int isPrime(int n){
	int i;
	for(i=2;i<=pow(n,0.5);i++){
		if(n%i==0) return 0;
	}
	if (n>1) 
		return 1;
	else
		return 0;
}

int main(){
	int i,j,t,f;
	int a[128]={0};
	char s[2002],c;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		/* clear */
		for(j=0;j<128;j++) a[j]=0;
		
		scanf("%s",s);

		/* add */
		for(j=0;j<strlen(s);j++){
			c = s[j];
			a[c]++;
		}

		/* print */
		f = 0;
		printf("Case %d: ",i);
		for(j=0;j<128;j++){
			if(a[j] && isPrime(a[j]) ){
				f = 1;
				printf("%c",j);			
			}					
		}
		if (f==0) printf("empty");
		printf("\n");
	}
	return 0;
}