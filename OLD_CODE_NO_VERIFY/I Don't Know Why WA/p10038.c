#include <stdio.h>
#include <math.h>

void main(){
    long a[3000],di[3000];
    int n,i,d;
    while ( scanf("%d",&n)==1 ){
		
		
		for (i=1;i<=n;i++) {
			scanf("%ld",&a[i]);
			di[i]=0;
		}
		for (i=1 ; i<= n-1 ; i++){
			d = abs( a[i]-a[i+1] );
			di[d]++;
			if (di[d]>1 || d > n-1) break;
		}
        if (di[d]>1){
			printf("Not jolly\n");
			continue;
		}
		for (i=1;i<=n-1;i++) if (di[i]!=1 ) break;
		if ( i<=n-1 ) 
            printf("Not jolly\n");
        else 
            printf("Jolly\n");
    }     
}
