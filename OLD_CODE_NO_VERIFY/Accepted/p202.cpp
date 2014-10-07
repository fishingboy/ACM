/* @JUDGE_ID:  12991WW  202  C++  */

#include <stdio.h>
#include <string.h>

int main(){
     int   m[10000];
     int dig[10000];
     int ans;
     int x,y;
     int i,j,t,tt;
     int find;

     while (scanf("%d %d",&x,&y)==2){
	  find=t=tt=0;
	  ans= (int) x/y;
	  printf("%d/%d = %d.",x,y,ans);

	  x= (x%y)*10;
	  while (find==0){
	       t++;
	       m[t]=x ;
	       dig[t]=(int) x/y;
	       x=(x%y) *10;


	       for (i=1;i<=t-1;i++){
		   if (m[i]==m[t] ){
		       find=1;
		       for (j=1;j<=i-1;j++){
			   printf("%d",dig[j]);
		       }
		       printf("(");
		       for (j=i;j<=t-1;j++){
			   tt++;
			   printf("%d",dig[j]);
			   if (tt == 50) {
			       printf("...");
			       break;
			   }
		       }
		       printf(")\n");
		       break;
		   }
	       }

	  }
	  printf("   %d = number of digits in repeating cycle\n\n",t-i);
     }
	return 0;
}