#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){
    int i,j,t,f,sl;
	int a[10];
    char s[81],ch;
    f=1;
	while ((gets(s))!=NULL){
		sl=strlen(s);
		for (i=0;i<=sl;i++) {
			if (s[i]!=' ')break;
		}
		if (i<=sl){
			for (j=0;j<=sl-i;j++) s[j] = s[j+i];		
		}
		sl=strlen(s);
		for (i=sl-1;i>0;i--){
			if (s[i] !=' '){
				s[i+1]='\0';
				break;
			}
		}

		t=0;
		i=0;
	    for (i=0;i<=strlen(s)-1 ;i++){
			if (s[i] !='-' && s[i]!=' ' ) t++;
			if (t>10){
				a[10]=1;
				s[i]='\0';
				break;
			}
            if ( s[i]=='X'){
                
                a[t] =10;                
            }else if (s[i] >='0' && s[i] <='9'){
                
                a[t] = s[i]-'0';
            }			
        }

		if (t>10){
			printf("%s is incorrect.\n",s);
			continue;
		}
        for (i=2;i<=10;i++) a[i] += a[i-1];
        for (i=2;i<=10;i++) a[i] += a[i-1];
        if  ( a[10] % 11==0)
			printf("%s is correct.\n",s);
		else
			printf("%s is incorrect.\n",s);
    }
	return 0;
}
