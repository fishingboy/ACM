#include <iostream.h>
#include <math.h>

int max_n;

int is_prime(int n){
	int i,sqrn;
	sqrn =(int)pow(n,0.5);
	for (i=2;i<=sqrn;i++){
		if (n%i==0) break;
	}
	if (i>sqrn) 
		return 1;
	else
		return 0;
}

void prp(int bn,int n){
	int i,sum,start_i;
    (bn%2=)
	for (i=2;i<=max_n;i=i+2){
		
	}
}

int  main(){
    int n,i;
	int arr[13];

	for (i=1;i<=12;i++){
		arr[i] = 0;
	}
	arr[1]=1;
	
	while (cin >>n){
		max_n = n;
		prp(1,2);
		cout <<n<<endl; 
		cout << is_prime(n) <<endl;
	}
	return 0;
}