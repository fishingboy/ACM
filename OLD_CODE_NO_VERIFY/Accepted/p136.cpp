#include <iostream.h>
#include <math.h>

unsigned long sp1,sp2;
unsigned long be;
unsigned long a[1840]={0};

void push(unsigned long x){
    long i;
    for (i=sp1;i>=sp2;i--){
       if (a[i]==x) break;
    }
    if (i<sp2){
       sp1++;
       a[sp1]=x;
    }
}

unsigned long g(void){
    unsigned long min,mini,p;
    unsigned long i;
    min=a[sp2];
    mini=sp2;
    for (i=sp2;i<=sp1;i++){
       if (min>a[i]){
	   min=a[i];
	   mini=i;
       }
    }
    //swap mini with sp2
    p=a[mini]; a[mini]=a[sp2]; a[sp2]=p;
    sp2++;
    return min;
}

int main(){
   unsigned long ans;
   unsigned long n=1500;
   unsigned long t=0;

   be=0;
   sp1=sp2=1;
   a[1]=1;

   while(t<n){
      t++;
      ans=g();
      push (ans*2);
      push (ans*3);
      push (ans*5);
   }
   cout <<"The 1500'th ugly number is "<<ans<<".\n";
   return 0;
}