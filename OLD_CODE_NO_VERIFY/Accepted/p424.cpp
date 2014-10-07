/* @JUDGE_ID:  12991WW  424  C++  "Easy algorithm" */

#include <iostream.h>
#include <string.h>
#include <stdlib.h>

void pp(char x[100] ,int l){
    int i,len,t;
    len=strlen(x);
    t=l-len;

    for (i=l-1;i>=t;i--){
	 x[i]=x[i-t];
    }
    for (i=0;i<=t-1;i++){
	  x[i]=48;
    }
    x[l]=0;
}

int sval(char m){
    return m-'0';
}



void ladd(char  a[],char  b[],char c[],int l ){
     int i,cy=0;
     for (i=l-1;i>=0;i--){
	  c[i]=( sval( a[i]) + sval(b[i])+cy )+'0';
	  if (sval( c[i] )<10 )
	     cy=0;
	  else{
	     c[i] = sval( c[i] )-10+'0';
	     cy=1;
	  }
     }
     c[l]=0;
}

void lprint( char s[1000]){
     int i,be=0;
     char m;
     for (i=0;i<=strlen(s)-1;i++){
	 m=s[i];
	 if (be==0 && m!='0') be=1;
	 if (be==1) cout <<m;
     }
     cout <<"\n";
}

main(){
    char a[1000],b[1000],c[1000];

    int f;
    int i;
    int maxl;
    cin >>a;

    while (cin >>b !=NULL){
       f=0;
       maxl=strlen(a);
       if (strlen(b) >maxl ) maxl=strlen(b);
       maxl++;

       pp(a,maxl);
       pp(b,maxl);

       ladd(a,b,a,maxl);
       //lprint(a);

    }
    lprint(a);
}