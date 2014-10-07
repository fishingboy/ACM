#include <stdio.h>
#include <string.h>

#define int_length 9
#define int_max 1000000000
#define arr_size 1000


int main(){
	int x[arr_size]={0};
	int y[arr_size]={0};
	int z[arr_size]={0};
	int *a,*b,*c,*ans_a;
	int i,j,n,f,max_i,temp;

	while (scanf("%d",&n)==1){
		/* other input */
		if (n==0){
			printf("The Fibonacci number for 0 is 0\n");
		}else if (n==1){ 
			printf("The Fibonacci number for 1 is 1\n");
		}else{	
		a = x;b = y;c = z;

		a[0] = 0; b[0] = 1;
		max_i = 0;
		for (i=2;i<=n;i++){
			/* clear c array */
			memset(c,0,sizeof(int)*arr_size);

			for(j=0;j<=max_i;j++){
				temp = a[j]+b[j]; 
				c[j] += temp % int_max;
				c[j+1] += temp / int_max;
				if(j==max_i && temp>=int_max) max_i++; 
			}

			/*  swap array */
			ans_a = c;
			c = a;
			a = b;
			b = ans_a;
		}
		
		/* print answer */
		printf("The Fibonacci number for %d is ",n);
		f = 0;
		for (i=max_i;i>=0;i--){
			if (f){
				printf("%0*d",int_length,ans_a[i]);	
			}else if(ans_a[i]!=0){
				printf("%d",ans_a[i]);		
				f = 1;
			}					
		}
		printf("\n");

		/* claer data*/
		memset(x,0,sizeof(int)*arr_size);
		memset(y,0,sizeof(int)*arr_size);
		memset(z,0,sizeof(int)*arr_size);
		}
	}
	return 0;
}