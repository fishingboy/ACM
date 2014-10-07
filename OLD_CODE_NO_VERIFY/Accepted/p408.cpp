#include <stdio.h>
#include <math.h>

long gcd(long m,long n){
    long k;
    do{
	k=m%n;
	m=n;
	n=k;
    }while (k!=0);
    return m;
}

int main(){
   long step,mod;
   while (scanf("%ld %ld",&step,&mod)==2){
       printf("%10ld%10ld",step,mod);
       if (gcd (step,mod)==1)
	   printf("    Good Choice\n\n");
       else
	   printf("    Bad Choice\n\n");
   }
   return 0;
}