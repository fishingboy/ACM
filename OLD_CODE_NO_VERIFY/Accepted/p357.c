#include <stdio.h>

int main(){
	
	double coin[]={1,5,10,25,50};
	double a[30001];
	int n,i,j;

	for (i=0;i<=30000;i++) a[i]=1;
    for (j=1;j<=4;j++){
       for (i=1;i<=30000;i++){
			if (i>=coin[j]) a[i] = a[i]+ a[ (int)(i-coin[j]) ];
       }
    }

	while (scanf("%d",&n)==1){		
		if (a[n]==1){
			printf("There is only 1 way to produce %d cents change.\n",n);
		}else{
			printf("There are %.0lf ways to produce %d cents change.\n",a[n],n);
		}
	}
}