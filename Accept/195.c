#include <stdio.h>
#include <string.h>

char p[1000];

void sort(){
	int i,j,len;
	char temp,q[1000];

	len = strlen(p); 
	strcpy(q,p);
	for (i=0;i<=strlen(q)-1;i++) q[i]=toupper(q[i]);

	for (i=0;i<=len-2;i++){
		for (j=i+1;j<=len-1;j++){
			if ( q[i] > q[j]){
				temp=q[i];q[i]=q[j];q[j]=temp;
				temp=p[i];p[i]=p[j];p[j]=temp;
			}else if (q[i]==q[j] && p[i]>p[j]){
				temp=p[i];p[i]=p[j];p[j]=temp;
			}
		}
	}	
}

void perm(int x){
    int i,j,oldt=0;
	char temp,old[1000];
    if ( x>=strlen(p) ){
		printf("%s\n",p);
    }else{		
        for (i=x;i<strlen(p);i++){
            for (j=1;j<=oldt;j++) if (old[j]==p[i]) break;
			if (j>oldt){ 
				oldt++;
				old[oldt]=p[i];

				temp=p[i];
				for (j=i;j>=x+1;j--) p[j]=p[j-1];
				p[x]=temp;
				
				perm(x+1);

				temp=p[x];
				for (j=x;j<=i-1;j++) p[j]=p[j+1];
				p[i]=temp;				
			}
		}
    }    
}

int main(){
    int i,t;
	scanf("%d",&t);
	for (i=1;i<=t;i++){
	    scanf("%s",p);
		sort();
		perm (0);
	}	
}
