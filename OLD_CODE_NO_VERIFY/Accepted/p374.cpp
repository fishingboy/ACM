/* @JUDGE_ID:  12991WW  374  C++  "Easy algorithm" */

#include <iostream.h>
#include <math.h>

main(){
     unsigned long i,bb;
     unsigned long b,p,m;
     unsigned long ans;
     int times,t;

     while(cin>>b>>p>>m !=NULL){
	t=times=0;
	bb=b%m;
	b=1;
	for (i=1;i<=p;i++){
	    b=(b*bb) % m;
	    if (b==1){
	       times=i;
	       break;
	    }else if (b==0){
	       break;
	    }
	}
	if (times!=0) t=p % times;
	for (i=1;i<=t;i++){
	    b=(b*bb) % m;
	}
	cout <<b<<"\n";
     }
}