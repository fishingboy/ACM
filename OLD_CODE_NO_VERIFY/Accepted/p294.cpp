/* @JUDGE_ID:  12991WW  294  C++  */

#include <iostream.h>
#include <math.h>

long totalf(unsigned long n){
    int i;
    int t=0;
    for (i=1;i<=sqrt(n);i++){
	if (n % i ==0 ) t++;
    }
    t *=2;
    if (sqrt(n)==(long)sqrt(n) ) t--;
    return t;
}

main(){
      unsigned long v,n,m,p;
      unsigned long max,maxn;
      long i,k;
      int s;
      cin >>s;

      for (k=1;k<=s;k++){
	   cin >>n>>m;
	   cout <<"Between "<<n<<" and "<<m<<", ";
	   if (n>m){
	       p=n;n=m;m=p;
	   }
	   max=0;
	   for (i=n;i<=m;i++){
		v=totalf(i);
		if (v>max){
		    max=v;
		    maxn=i;
		}
	   }
	   cout <<maxn<<" has a maximum of "<<max<<" divisors.\n";
      }

}