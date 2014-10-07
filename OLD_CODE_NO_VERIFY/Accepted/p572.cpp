/* @JUDGE_ID:  12991WW  572  C++  "Easy algorithm" */
#include <iostream.h>

char a[100][100];
int fx[]={1, -1, 0, 0, 1, 1, -1, -1};
int fy[]={0, 0, 1, -1, 1, -1, 1, -1};

void find(int x,int y){
     int i,xx,yy;
     a[x][y]='!';
     for (i=0;i<=7;i++){
	  xx=x+fx[i];
	  yy=y+fy[i];
	  if (a[xx][yy]=='@') find (xx,yy);

     }
}

main(){
    char s[100];
    int i,j,x,y,xx;
    int sum;

    while (cin >>x>>y,x!=0){
	//cout <<x<<" "<<y<<"\n";
	for (i=1;i<=x;i++){
	    cin >> s;
	    for (j=1;j<=y;j++){
		a[i][j]=s[j-1];
	    }
	}
	sum=0;
	for (i=1;i<=x;i++){
	    for (j=1;j<=y;j++){
		if (a[i][j]=='@'){
		    sum++;
		    find(i,j);
		}
	    }
	}

	cout <<sum<<"\n";
     }
}
