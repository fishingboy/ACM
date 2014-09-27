#include <stdio.h>

void change_x(long n,int x){
	int a[500],t=0,i;
	while (n>0){
		a[t++] = n % x;
		n = n/x;		
	}
	for(i=t-1;i>=0;i--)	printf("%d",a[i]);
}

int main(){
	long n;
	while (scanf("%ld",&n)==1){
		if(n<0) break;
		if(n==0){ 
			printf("0\n");
		}else{
			change_x(n,3);printf("\n");
		}
	}
	return 0;
}