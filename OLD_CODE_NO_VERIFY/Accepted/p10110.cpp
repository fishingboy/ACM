/* @JUDGE_ID:  12991WW  10110  C++   */

#include <iostream.h>
#include <math.h>
main(){
     unsigned long n;

     while(cin >>n,n!=0){
	 if (sqrt(n) == (long) sqrt(n) )
	    cout <<"yes\n";
	 else
	    cout <<"no\n";
     }
}