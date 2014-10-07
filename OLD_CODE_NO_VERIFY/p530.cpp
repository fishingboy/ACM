#include <iostream.h>

long nCr(long n,long r){
	if (n==r || r==0){
		return 1;
	}else if (r==1){
		return n;
	}else{
		return nCr(n-1,r-1) + nCr(n-1,r);
	}
}

void main(){
	long  n,m;
	while (cin >>n>>m){
		cout << nCr(n,m)<<endl;
	}
}