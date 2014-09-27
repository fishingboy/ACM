#include <stdio.h>

int main(){
    long i,j,n;
    long f,x,y,z;
    long sum;        

    scanf("%ld",&n);
    for (i=1;i<=n;i++){
	sum=0;
	scanf("%ld",&f);
        for (j=1;j<=f;j++){
	    scanf("%ld %ld %ld",&x,&y,&z);
            sum +=  x*z;
        }
        printf("%ld\n",sum);
    }	
    return 0;
}
