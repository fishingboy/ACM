/* @JUDGE_ID:  12991WW  350  C++  */

#include <iostream.h>
#include <string.h>

main(){
     int a[10000];
     int find,t;
     int tt=0,j,k;
     long z,i,m,l;

     while (cin >>z>>i>>m>>l , m != 0){
	   tt++;
	   find = t = 0 ;
	   for (k=1; find != 1 ;k++){
	      t++;
	      a[t]=l;
	      l=(z*l+i) %m;

	      for (j=1;j<=t;j++){
		  if (a[j]==l){
		    find=1;
		    break;
		  }
	      }
	   }
	   cout <<"Case "<<tt<<": "<<k-j<<"\n";
     }
}