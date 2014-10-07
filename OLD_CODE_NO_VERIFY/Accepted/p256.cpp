/* @JUDGE_ID:  12991WW  256  C++  "Easy algorithm" */


#include <stdlib.h>
#include <stdio.h>
#include <iostream.h>
#include <string.h>

long qsum(char s[10],int b){
    int i,n;
    long ans;
    long x,y;
    char b1[10],b2[10];
    for (i=1;i<=b;i++){
       b1[i-1]=s[i-1];
       b2[i-1]=s[i+b-1];
    }
    b1[b]=b2[b]=0;
    x=atol(b1);
    y=atol(b2);
    ans= (x+y)*(x+y);
    return ans;
}

main(){
    int i;
    int n;
    char s[100];
    unsigned long val;
    int t1,t2,t3,t4;
    unsigned long b1[100];
    unsigned long b2[100];
    unsigned long b3[100];
    unsigned long b4[100];

    t1=t2=t3=t4=0;

    for (i=0;i<=9;i++){
	val=(long)i*i;
	sprintf(s,"%02ld",val);
	if (qsum(s,1)==val){
	   t1++;
	   b1[ t1 ]=val;
	}
    }

    for (i=0;i<=99;i++){
	val=(long)i*i;
	sprintf(s,"%04ld",val);
	if (qsum(s,2)==val) {
	    t2++;
	    b2[t2]=val;
	}
    }

    for (i=0;i<=999;i++){
	val=(long)i*i;
	sprintf(s,"%06ld",val);
	if (qsum(s,3)==val) {
	    t3++;
	    b3[t3]=val;
	}
    }

    for (i=0;i<=9999;i++){
	val=(long)i*i;
	sprintf(s,"%08ld",val);
	if (qsum(s,4)==val) {
	     t4++;
	     b4[t4]=val;
	}
    }

    while (cin >>n !=NULL){
	 if (n==2){
	     for (i=1;i<=t1;i++){
		  printf("%02ld\n",b1[i]);
	     }
	 }

	 if (n==4){
	     for (i=1;i<=t2;i++){
		  printf("%04ld\n",b2[i]);
	     }
	 }

	 if (n==6){
	     for (i=1;i<=t3;i++){
		  printf("%06ld\n",b3[i]);
	     }
	 }

	 if (n==8){
	     for (i=1;i<=t4;i++){
		  printf("%08ld\n", b4[i] );
	     }
	 }
    }
}