/* @JUDGE_ID:  12991WW  357  C++  "Easy algorithm" */

#include <iostream.h>
#include <string.h>

main(){
    int i,j;
    long coin[]={1,5,10,25,50};
    long n;
    unsigned long a[7500];

    for (i=0;i<=7500;i++){
       a[i]=1;
    }
    for (j=1;j<=4;j++){
       for (i=1;i<=7500;i++){
	  if (i>=coin[j]) a[i]=a[i]+a[i-coin[j]];
       }
    }

    while (cin>>n !=NULL){
	if (a[n]==1){
	   cout <<"There is only 1 way to produce ";
	   cout <<n<<" cents change.\n";

	}else{
	   cout <<"There are "<<a[n];
	   cout <<" ways to produce "<<n<<" cents change.\n";
	}
    }
}