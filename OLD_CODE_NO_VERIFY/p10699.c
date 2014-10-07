#include <stdio.h>
#include <math.h>

int main(){
    
    long i,n,nn,pt,j;
    long be;
    while (scanf("%ld",&n)==1){
        pt=0;
        j=2;
        nn=n;
        be=0;
           
	while (nn>1){
	    if ( j>n/2 )  break;
            if (nn%j ==0){
               if (be != j ) pt++;
               nn = nn % j;
               be = j;        
            }else{
               j++;
            }
        }
        printf("pt=%d",pt);
    }
    return 0;
}
