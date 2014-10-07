/* @JUDGE_ID:  12991WW  621  C++  */

#include <stdio.h>
#include <iostream.h>
#include <string.h>

main(){
    long n;
    int len;
    char s[1000];
    cin >>n;

    while (cin >>n !=NULL){
	  sprintf(s,"%ld",n);
	  len=strlen(s);
	  if (strcmp("1",s) ==0 || strcmp("4",s) ==0 || strcmp("78",s)==0 ){
		cout <<"+\n";
	  }else if (s[len-2]=='3' && s[len-1]=='5' ){
		cout <<"-\n";
	  }else if (s[0]=='9' && s[len-1]=='4' ){
		cout <<"*\n";
	  }else if (s[0]=='1' && s[1]=='9' && s[2]=='0'){
		cout <<"?\n";
	  }
    }
}