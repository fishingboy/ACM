#include <stdio.h>

long f91(long n){
    if (n>100)
        return n-10;
    else
        return f91(f91(n+11));
}

int main(){
    long n;
    while (1){
	scanf("%d",&n);
		if (n==0) break;
        printf("f91(%ld) = %ld\n",n,f91(n));
    }    
    return 0;
}
