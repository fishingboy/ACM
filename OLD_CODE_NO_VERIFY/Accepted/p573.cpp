/* @JUDGE_ID:  12991WW  573  C++  "Easy algorithm" */

#include <iostream.h>

main(){
   double h,u,d,f,uu;
   double sum;
   long t;

   while (cin >>h>>u>>d>>f,h!=0){
	sum=t=0;
	uu=u;
	while (1){
	    t++;
	    sum=sum+u;
	    if (sum>h) break;
	    sum=sum-d;
	    if (sum<0) break;
	    u=u-uu*f/100;
            if (u<0) u=0;
         }
	if (sum<0)
	   cout <<"failure on day "<<t<<"\n";
	else
	   cout <<"success on day "<<t<<"\n";

   }
}