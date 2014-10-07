/* @JUDGE_ID:  12991WW  499  C++  "Easy algorithm" */

#include <stdio.h>
#include <iostream.h>
#include <string.h>
#include <ctype.h>

main(){
     char s[10000];
     char a[10000];
     char ans[1000];
     int i,j,max,t,anst;;
     int p;
     int asum[10000];

     while (gets (s)){
	 anst = max = t = anst = 0;
	 if (strlen(s) ==0) continue;
	 for (i=0;i<=strlen(s)-1;i++){
	     if (isalpha( s[i] ) !=0){
		 for (j=1;j<=t;j++){
		    if (a[j]==s[i]) break;
		 }
		 if (j>t){
		    t++;
		    a[t]=s[i];
		    asum[t]=1;
		 }else{
		    asum[j]++;
		 }
	     }
	 }
	 for (i=1;i<=t;i++){
	     if (asum[i] > max){
		  anst=0;
		  max=asum[i];
		  ans[anst]=a[i];
	     }else if (asum[i]==max){
		  anst++;
		  ans[anst]=a[i];
	     }
	 }
	 // sort ...
	 for (i=0;i<=anst-1;i++){
	     for (j=i+1;j<=anst;j++){
		if (ans[i]>ans[j]){
		    p=ans[i];ans[i]=ans[j];ans[j]=p;
		}
	     }
	 }

	 // print ...
	 ans[anst+1]=0;
	 cout <<ans<<" "<<max<<"\n";
     }
}