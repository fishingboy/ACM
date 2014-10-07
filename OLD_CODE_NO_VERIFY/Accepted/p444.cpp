/* @JUDGE_ID:  12991WW  444  C++  "Easy algorithm" */

#include <stdio.h>
#include <iostream.h>
#include <ctype.h>
#include <string.h>

void digp(char a[300]){
    int x;
    int l;
    int asc;
    char word;
    l=strlen(a);
    while ( l !=0 ){
	l=strlen(a);
	if (l==0) break;
	asc=0;
	asc=(a[l-1]-'0')*10;
	asc=asc+( a[l-2]-'0' );
	if (asc>=30){
	  word=asc;
	  a[l-2]=0;
	}else{
	  asc=asc*10+( a[l-3]-'0');
	  word=asc;
	  a[l-3]=0;
	}
	cout <<word;
    }
    cout <<"\n";
}

void charp(char a[300]){
    char mm[10];
    int asc,i,j,l;

    l=strlen(a);
    for (i=l-1;i>=0;i--){
	asc=a[i];
	sprintf(mm,"%d",asc);
	for (j=strlen(mm)-1;j>=0;j--){
	   cout <<mm[j];
	}
    }
    cout <<"\n";
}


main(){
       char s[300];

       while (gets(s)){
	   if (strlen(s)==0){
	       cout <<"\n";
	       continue;
	   }
	   if (isdigit(s[0]) !=0){
	       digp(s);
	   }else{
	       charp(s);
	   }
       }
}