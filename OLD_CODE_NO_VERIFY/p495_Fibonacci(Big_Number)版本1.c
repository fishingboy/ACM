/* 超過時間了？？ */

#include <stdio.h>
#include <string.h>

#define int_length 4
#define int_max 10000
#define arr_size 1000


int main(){
	int a[arr_size]={0},ai;
	int b[arr_size]={0},bi;
	int c[arr_size]={0},ci;
	int i,j,n,f,max_i,temp;

	while (scanf("%d",&n)==1){
		/* other input */
		if (n==0){
			printf("The Fibonacci number for 0 is 0\n");
		}else if (n==1){ 
			printf("The Fibonacci number for 1 is 1\n");
		}else{	

		a[0] = 0; b[0] = 1;
		ai = bi = ci = max_i = 0;
		for (i=2;i<=n;i++){
			/* clear c array */
			memset(c,0,sizeof(int)*arr_size);

			for(j=0;j<=max_i;j++){
				temp = a[j]+b[j]; 
				c[j] += temp % int_max;
				c[j+1] += temp / int_max;
				if(j==max_i && temp>=int_max) max_i++; 
			}

			/*  copy array */
			memcpy(a,b,sizeof(int)*arr_size);
			memcpy(b,c,sizeof(int)*arr_size);
		}
		
		/* print answer */
		printf("The Fibonacci number for %d is ",n);
		f = 0;
		for (i=max_i;i>=0;i--){
			if (f){
				printf("%0*d",int_length,c[i]);	
			}else if(c[i]!=0){
				printf("%d",c[i]);		
				f = 1;
			}			
		}
		printf("\n");

		/* claer data*/
		memset(a,0,sizeof(int)*arr_size);
		memset(b,0,sizeof(int)*arr_size);
		memset(c,0,sizeof(int)*arr_size);
		}
	}
	return 0;
}