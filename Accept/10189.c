#include <stdio.h>
#include <string.h>

char a[102][102];
int n,m;

void add(int x,int y){
	int i;
	int newx,newy;
	int xx[]={1,1,1,-1,-1,-1,0,0};
	int yy[]={-1,0,1,-1,0,1,1,-1};
	for (i=0;i<8;i++){
		newx = x + xx[i];
		newy = y + yy[i];
		if (newx > n-1 || newy >m-1) continue;
        if (newx < 0   || newy < 0)  continue;
		if (a[newx][newy] !='*'){
			a[newx][newy] +=1;			
		}
	}
}

int main(){
	int i,j;
	int t=0;
	while (scanf("%d %d",&n,&m) ==2){
		if (n==0 || m==0) break;
		t++;
		if (t!=1) printf("\n");
		printf("Field #%d:\n",t);
		for (i=0;i<n;i++){
			scanf("%s",a[i]);			 
		}
	
       
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				if (a[i][j]=='.'){
	                a[i][j]='0';   										
				}
			}
		}
        

       
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				if (a[i][j]=='*'){
					add(i,j);										
				}
			}
		}
		
		for (i=0;i<n;i++){
			printf("%s\n",a[i]);
		}		
	}
    return 0;
}
