/* @JUDGE_ID:  12991WW  103  C++  "Easy algorithm" */

#include <iostream.h>
#include <stdio.h>
#include <string.h>

int x,y,t,max;
int maxt;
int box[30][11]={0};
int abox[30]={0};
int ansbox[30]={0};

void findbox(int n,int total){
    int i,j;
    if (n==x){
       if (total>max){
	  max=total;
	  maxt=t;
	  for (i=1;i<=t;i++){
	     ansbox[i]=abox[i];
	  }
       }
    }
    for(i=n+1;i<=x;i++){
       for(j=1;j<=y;j++){
	  if (box[i][j] <= box[n][j]) break;
       }
       if (j>y){
	  t++;
	  abox[t]=box[i][y+1];
	  findbox(i,total+1);
	  t--;
       }
    }
}

main(){
    int i,j,k,p;
    while (cin>>x !=NULL){
	cin >>y;
	t=max=maxt=0;
	for(i=1;i<=x;i++){
	    for(j=1;j<=y;j++){
		cin >>box[i][j];
	    }
	    box[i][y+1]=i;
	}

	for(i=1;i<=x;i++){
	    for(j=1;j<=y-1;j++){
		for(k=j+1;k<=y;k++){
		   if (box[i][j]>box[i][k]){
		      p=box[i][j];
		      box[i][j]=box[i][k];
		      box[i][k]=p;
		   }
		}
	    }
	}
	for(i=1;i<=x-1;i++){
	    for(j=i+1;j<=x;j++){
		if (box[i][1]>box[j][1]){
		    for (k=1;k<=y+1;k++){
			p=box[i][k];
			box[i][k]=box[j][k];
			box[j][k]=p;
		    }
		}
	    }
	}

	for (i=1;i<=x;i++){
	    t=1;
	    abox[1]=box[i][y+1];
	    findbox(i,1);
	    t=0;
	}
	cout <<max<<"\n";

	for(i=1;i<=maxt;i++){
	   cout <<ansbox[i];
	   if (i==maxt) break;
	   cout <<" ";
	}
	cout <<"\n";
    }
}