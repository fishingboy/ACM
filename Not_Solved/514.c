#include <stdio.h>

void main(){
	int n,i,max,min;
	int find;
	int a[1001];	

	while ( scanf("%d",&n)==1){
		if (n==0) break;
		while (scanf("%d",&a[1])==1){	
			if (a[1]==0) break;
			for (i=2;i<=n;i++) {
				scanf("%d",&a[i]);
				
			}			
			max=min=a[1];
			for (i=2;i<=n;i++) {
				if (a[i] > max ){
					max=min=a[i];
				}else{
					if (a[i] < min){
						min=a[i];
					}else{					
						printf("no\n");					
						break;
					}
				}
			}
			if (i>n) printf("yes\n");	
		}
		printf("\n");
	}
}