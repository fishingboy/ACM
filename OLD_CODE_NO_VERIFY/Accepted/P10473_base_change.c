#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[20];
	int n;
	while (scanf("%s",s)==1){
		if(atoi(s)<0) break;
		if ((s[0]=='0') && (s[1]=='x' || s[1]=='X') ){
			sscanf(s,"%x",&n);
			printf("%d\n",n);
		}else{
			sscanf(s,"%d",&n);
			printf("0x%X\n",n);
		}
	}
	return 0;
}