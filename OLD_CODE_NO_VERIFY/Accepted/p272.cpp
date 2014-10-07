/* @JUDGE_ID:  12991WW  272  C++  "Easy algorithm" */
#include <stdio.h>
#include <iostream.h>
#include <string.h>

int main(){
	char *ss;
	char *string;
	char str[100];
	int i,t=0;
	string=str;
	while (gets(string)){
	     for (i=0;i<strlen(string);i++){
		 if (string[i]=='\"'){
		    t++;
		    if (t % 2==1){
			cout <<"``";
		    }else{
			cout <<"''";
		    }
		 }else{
		    cout <<string[i];
		 }
	     }
	     cout <<"\n";
	}
}
