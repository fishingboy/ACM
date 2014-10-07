/* @JUDGE_ID:  12991WW  446  C++  "Easy algorithm" */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream.h>

  char *s[]={"0000", "0001", "0010", "0011",
	      "0100", "0101", "0110", "0111",
	      "1000", "1001", "1010", "1011",
	      "1100", "1101", "1110", "1111" };

void pri(char *aa){
       int l,j,m;
       l=strlen(aa);
       for (j=1;j<=13-l*4;j++){
	   cout <<"0";
       }
       for (j=0;j<l;j++){
	   if (isdigit(aa[j])!=0){
	      m=aa[j]-48;
	      cout <<s[m];
	   }else{
	      m=aa[j]-55;
	      cout <<s[m];
	   }
      }
}

main(){
   long a,b;
   int i,n;
   char f;
   char aa[100],bb[100];

   cin >>n;
   for (i=1;i<=n;i++){
       scanf("%lX %c %lX",&a,&f,&b);
       // cout <<a<<" "<<b<<" "<<a+b;
       sprintf(aa,"%lX",a);
       sprintf(bb,"%lX",b);
       if (f=='+'){
	   pri(aa);
	   cout <<" + ";
	   pri(bb);
	   cout <<" = "<<a+b<<"\n";
       }else{
	   pri(aa);
	   cout <<" - ";
	   pri(bb);
	   cout <<" = "<<a-b<<"\n";
       }
   }
}