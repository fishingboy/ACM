/* @JUDGE_ID:  12991WW  369  C++  "Easy algorithm" */

#include <iostream.h>
#include <string.h>

main(){
    unsigned long  a[101][101]; //={0};
    unsigned long ans;
    int i,j;
    int n,r;

    a[0][0]=1;

    for(i=1;i<=100;i++){
       a[i][0]=1;
       a[i][i]=1;

       for (j=1;j<=i-1;j++){
	  a[i][j]= a[i-1][j-1] + a[i-1][j];
       }
    }
    while (cin>>n>>r ,n !=0){
	ans=a[n][r];
	cout <<n<<" things taken "<<r;
	cout <<" at a time is "<<ans<<" exactly.\n";
    }
}