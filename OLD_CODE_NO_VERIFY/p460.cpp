#include <iostream>

using namespace std;

long max(long a,long b){
     if (a>b)
	 return a;
     else
	 return b;
}

long min(long a,long b){
     if (a<b)
	 return a;
     else
	 return b;
}

int main(){
      
     long i,n;
     long x1,y1,x2,y2;
     long xx1,yy1,xx2,yy2;
     long ansx1,ansx2,ansy1,ansy2;
     cin >>n;
     for (i=1;i<=n;i++){    
		cin>>x1>>y1>>x2>>y2;
	    cin >>xx1>>yy1>>xx2>>yy2;

	    ansx1=max(x1,xx1);
	    ansx2=min(x2,xx2);
	    ansy1=max(y1,yy1);
	    ansy2=min(y2,yy2);

	    if (ansx1 < ansx2 && ansy1 < ansy2 ){
		  cout <<ansx1<<" "<<ansy1<<" ";
		  cout <<ansx2<<" "<<ansy2<<endl;
	    }else{
		  cout <<"No Overlap"<<endl;
	    }	    
     }
	 return 0;
}