#include <stdio.h>

void main(){
	int i,j,n;
	int a,b,t=0;
	int temp;
	char rightAns[1001],rans[1001],ans[1001];

	while (scanf("%d",&n)==1){
		if (n==0) break;
		t++;
		printf("Game %d:\n",t);
		for (i=1;i<=n;i++) {
			scanf("%d",&temp);
			rightAns[i]=temp + '0';
		}
		
		while (1){
			for (i=1;i<=n;i++) {
				scanf("%d",&temp);
				ans[i]=temp + '0';
			}

			ans[i]='\0';ans[0]=' ';
			
			for (i=1;i<=n;i++) rans[i]=rightAns[i];
			rans[i]='\0';rans[0]=' ';
			
			for (i=1;i<=n;i++) {if(ans[i]!='0') break;}
			
			if (i>n) break;			

			a=b=0;
			for (i=1;i<=n;i++) {
				if (rans[i]==ans[i]){
					a++;
					ans[i]='x';
					rans[i]='x';
				}
			}
			
			for (i=1;i<=n;i++){
				if (rans[i]=='x') continue;
				for (j=1;j<=n;j++){
					if ( rans[i]==ans[j]){
						b++;
						ans[j]='x';
						rans[i]='x';
						break;
					}
				}
			}			
			printf("    (%d,%d)\n",a,b);
		}

	}
}