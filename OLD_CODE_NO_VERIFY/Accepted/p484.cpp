/* @JUDGE_ID:  12991WW  484  C++  "Easy algorithm" */

#include <iostream.h>
#include <string.h>

main(){
    int a[1000];
    int asum[1000];
    long t=0;
    int n,i,j;

    while (cin >>n !=NULL){
	 for (i=1;i<=t;i++){
	     if (a[i]==n) break;
	 }
	 if (i>t){
	     t++;
	     a[t]=n;
	     asum[t]=1;
	 }else{
	     asum[i]++;
	 }
    }
    for (i=1;i<=t;i++){
	cout <<a[i]<<" "<<asum[i]<<"\n";
    }
}