/* @JUDGE_ID:  12991WW  412  C++  */
#include <stdio.h>
#include <iostream.h>
#include <math.h>

int gcd(int m,int n){
    int k;
    do{
	k=m%n;
	m=n;
	n=k;
    }while (k!=0);
    return m;
}

main(){
    int i,j,n;
    double a[100];
    double nn,pri;
    double ans;

    while (cin >> n, n != 0){
	  nn=pri=0;
	  for (i=1;i<=n;i++){
	      cin >>a[i];
	  }
	  for (i=1;i<=n-1;i++){
	      for (j=i+1;j<=n;j++){
		  nn++;
		  if ( gcd(a[i],a[j]) ==1) pri++;
	      }
	  }
	  if (pri ==0){
	      cout <<"No estimate for this data set.\n";
	  }else{
	      ans= sqrt( 6.0 * nn/pri);
	      printf("%.6lf\n",ans);
	  }
    }
}