#include <stdio.h>
#include <stdlib.h>

int min;
int  fx[]={1,-1,0,0,0,0};
int  fy[]={0,0,1,-1,0,0};
int  fz[]={0,0,0,0,1,-1};
char a[31][31][31]={0};


void find(int x,int y,int z,int total){
    int i;
    int xx,yy,zz;
    if (a[x][y][z]=='E'){
		if (min>total) min=total;
    }else{
		for (i=0;i<=5;i++){
			 xx=x+fx[i];
			 yy=y+fy[i];
			 zz=z+fz[i];
			 a[x][y][z]='+';
			 if (a[xx][yy][zz]=='.' || a[xx][yy][zz]=='E'){
				 find (xx,yy,zz,total+1);
			 }
		 /* a[x][y][z]='.'; */
		}
	}
}

int main(){
    int x,y,z;
    int i,j,k;
    char ss[31];
	
	freopen("532.IN","r",stdin);

    while (scanf("%d %d %d",&x,&y,&z),x!=0){
		min=999999;

		/* input */
		for (i=1;i<=x;i++){
			for (j=1;j<=y;j++){
			 gets(ss);
			 for(k=1;k<=z;k++){
				a[i][j][k]=ss[k-1];
			 }
			}
		}

		/* print array */
		
		for (i=1;i<=x;i++){
			for (j=1;j<=y;j++){
				for(k=1;k<=z;k++){
					printf("%c",a[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");			
		}
   
		system("PAUSE");

		find (1,1,1,0);
		if (min==999999)
			printf("Trapped!\n");
		else
			printf("Escaped in %d minute(s).\n",min);

		/* clear array */
		for (i=1;i<=x;i++){
			for (j=1;j<=y;j++){
				for(k=1;k<=z;k++){
					a[i][j][k]=0;
				}
			}
		}
    }
	return 0;
}