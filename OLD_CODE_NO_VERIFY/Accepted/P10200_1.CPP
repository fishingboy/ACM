/* @JUDGE_ID:  12991WW  10200  C  */

#include <stdio.h>
#include <math.h>

long prime[4000],t=0;

long ynp(long n){
    long i,k;
    k= n*n + n + 41;
    for (i=0;i<=t;i++){
	if (k % prime[i]==0){
	    return 0;
	    break;
	}else if ( prime[i]> n+1 ){
	    return 1;
	    break;
	}
    }
}


void main(){
    long no[10001],k;
    long i,j,a,b;
    long n,pn;
    double pc;

    prime[0]=2;
    for (i=3;i<=11000;i++){
	for (j=0;;j++){
	    if ( i % prime[j]==0 ){
		break;
	    }else if (prime[j] >sqrt(i) ){
		t++;
		prime[t]=i;
		break;
	    }

	}

    }

    for (i=0;i<=10000;i++){

	no[i]=ynp(i);
    }


    while (scanf("%ld %ld",&a,&b)==2){
	n=pn=0;
	n=b-a+1;
	for (i=a;i<=b;i++){
	   if (no[i]==1) pn++;
	}
	pc=(double)pn / (double)n * 100;
	printf("%.2lf\n",pc);
    }

}