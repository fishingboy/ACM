/* @JUDGE_ID:  12991WW  483  C++  "Easy algorithm" */

#include <stdio.h>
#include <iostream.h>
#include <string.h>

void p(char s[1000]){
     int i,l;
     l=strlen(s);
     for (i=l-1;i>=0;i--){
	 cout <<s[i];
     }
}


int main(){
	char *ss;
	char str[1000];

	while (gets(str)){
		ss=strtok(str," ");
		p(ss);
		while(ss=strtok(NULL," ")) {
			cout <<" ";
			p(ss);
		}
		cout <<"\n";
	}
}
