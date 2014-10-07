/* @JUDGE_ID:  12991WW  111  C++  "Easy algorithm" */

#include <iostream.h>
#include <stdio.h>
#include <math.h>

int max(int a,int b ,int c){
    if (b>a) a=b;
    if (c>a) a=c;
    return a;

}


main(){
   int i,j;
   int n;
   int ans[21];
   int aa[21];
   int a[21][21]={0};
   cin >>n;
   for(i=1;i<=n;i++){
      cin >>ans[i];
   }

   while (cin >>aa[1] !=NULL){
      for(i=2;i<=n;i++){
	 cin >>aa[i];
      }
      for (i=1;i<=n;i++){
	  for (j=1;j<=n;j++){
	      if (ans[i]==aa[j]) a[i][j]=1;
	      a[i][j]=a[i][j]+max(a[i-1][j],a[i][j-1],a[i-1][j-1]);
	  }
      }

      if (a[n][n]==0)
	  cout <<"0\n";
      else
	  cout << a[n][n]<<"\n";
      //clear!

      for (i=1;i<=n;i++){
	  for (j=1;j<=n;j++){
	      a[i][j]=0;
	  }
      }
   }
}