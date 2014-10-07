/* @JUDGE_ID:  12991WW  386  C++  "Easy algorithm" */

#include <stdio.h>
#include <math.h>

main(){
     unsigned long a3,m1,m2,m3,sum;
     int aa,bb,cc,d,ii;
     double dd;

     for (aa=6;aa<=200;aa++){
	 a3=pow(aa,3);
	 m1=pow( (a3/3),(double)1/3);
	 for (bb=2;bb<=m1;bb++){
	      sum=pow(bb,3);
	      m2=(long) (pow(a3-sum,(double)1/3));

	      for (cc=bb+1;cc<=m2+1;cc++){
		  sum=pow(bb,3)+pow(cc,3);
		  if (a3<=sum) break;
		       sum=pow(bb,3)+pow(cc,3);
		       dd=pow((a3-sum),(double)1/3);
		       ii=(int)dd;
		       for(d=ii;d<=ii+1;d++){
			   sum=pow(bb,3)+pow(cc,3)+pow(d,3);

		       if ( sum==a3 && d>cc ){
			    printf("Cube = %d, Triple = (%d,%d,%d)\n",aa,bb,cc,d);
		       }

		       }
	      }
	 }
     }


}