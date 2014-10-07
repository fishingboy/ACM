/* @JUDGE_ID:  12991WW  275  C++  */

#include <stdio.h>
#include <iostream.h>
#include <string.h>

main(){
     int   m[10000];
     int dig[10000];
     int ans;
     int x,y;
     int i,j,t,tt;
     int find,f;

     while (cin >>x>>y ,y !=0){
	  f=find=t=0;
	  tt=1;
	  ans= (int) x/y;
	  cout <<".";

	  x= (x%y)*10;
	  while (find==0){
	       t++;
	       m[t]=x ;
	       dig[t]=(int) x/y;
	       x=(x%y) *10;
	       if (x==0) {
		  f=1;
		  for (i=1;i<=t;i++){
		       tt++;
		       if (tt % 50 ==0) cout <<"\n";
		       cout <<dig[i];
		  }
		  break;
	       }
	       for (i=1;i<=t-1;i++){
		   if (m[i]==m[t] ){
		       find=1;
		       for (j=1;j<=t-1;j++){
			   tt++;
			   cout <<dig[j];
			   if (tt % 50 ==0) cout <<"\n";
		       }

		       break;
		   }
	       }

	  }
	  cout <<"\n";
	  if (f==1)
	       cout <<"This expansion terminates.\n";
	  else
	       printf("The last %d digits repeat forever.\n",t-i);
     }
}