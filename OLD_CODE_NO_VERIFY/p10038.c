#include <stdio.h>
#include <math.h>

int main(){
    long a[3000],d;
    int n,i;
    while (scanf("%d",&n)==1){
	for (i=1;i<=n;i++) scanf("%ld",&a[i]);
        for (i=1 ; i<= n-1 ; i++){
	    d = abs( a[i]-a[i+1] );
            if ( !(d==i ||d==n-i)) break;
	}
        if ( i<=n-1 ) 
            printf("Not jolly\n");
        else 
            printf("Jolly\n");
    } 
    return 0;
}
