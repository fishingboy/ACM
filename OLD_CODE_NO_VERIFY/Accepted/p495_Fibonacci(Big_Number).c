#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define int_length 9
#define int_max 1000000000
#define arr_size 120


int main(){
	int *ans[5001];
	int i,j,n,f,max_i,temp;
	
	/* Point array */
	for(i=0;i<=5000;i++){
		ans[i] = (int *)malloc(sizeof(int)*arr_size);
		for(j=0;j<arr_size;j++) ans[i][j]=0; 
	}

	/* Cal Fibonacci Table */
	max_i=0;
	ans[0][0]=0;ans[1][0]=1;
	for(i=2;i<=5000;i++){
		for(j=0;j<=max_i;j++){
			temp = ans[i-1][j] + ans[i-2][j];
			ans[i][j]   += temp % int_max;
			ans[i][j+1] += temp / int_max;
			if(j==max_i && temp >= int_max) max_i++;
		}		
	}
	
	while (scanf("%d",&n)==1){
		if(n==0) {
			printf("The Fibonacci number for 0 is 0\n",n);
			continue;
		}

		/* print answer */
		printf("The Fibonacci number for %d is ",n);
		f = 0;
		for (i=max_i;i>=0;i--){
			if (f){
				printf("%0*d",int_length,ans[n][i]);	
			}else if(ans[n][i]!=0){
				printf("%d",ans[n][i]);		
				f = 1;
			}					
		}
		printf("\n");
	}
	return 0;
}