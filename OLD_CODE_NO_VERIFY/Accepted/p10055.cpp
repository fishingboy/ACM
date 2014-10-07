/* @JUDGE_ID:  12991WW  10055  C++  "Easy algorithm" */

#include <stdio.h>
#include <iostream.h>

main(){
     double   p, x,y;
     while (cin >>x>>y !=NULL ){
	 if (x<y){
	    p=x;x=y;y=p;
	 }
	 printf( "%.0lf\n" , x-y ) ;

	 //cout <<x-y<<"\n";
     }
}