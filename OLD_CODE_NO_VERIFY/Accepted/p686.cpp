/* @JUDGE_ID:  12991WW  686  C++  "Easy algorithm" */

#include <iostream.h>
#include <math.h>

long pri(long m){
    int i;
    for (i=2;i<=sqrt(m);i++){
       if (m%i==0) break;
    }
    if (m==1) i++;
    if (i>sqrt(m))
       return 1;
    else
       return 2;
}


main(){
   long n;
   long i,j;
   long sum;
   long mo;

   while (cin>>n,n!=0){
       sum=0;
       for (i=2;i<=n;i++){
	    if (pri(i)==1){
	       mo=n-i;
	       if (pri(mo)==1 && i<=mo ){
		  sum++;
		  //cout <<i<<" "<<mo<<"\n";
	       }
	    }
	    if (i>=mo) break;
       }
       cout <<sum<<"\n";
   }
}