/* @JUDGE_ID:  12991WW  583  C++  "Easy algorithm" */
#include <iostream.h>
#include <math.h>

void pp(long n){
  long i;
  long be=2;
  long nn;
  nn=sqrt(n);
  for(i=be;i<=nn;i++){
    if (n%i==0){
	n=n/i;
	cout <<i;
	be=i;
	break;
    }
  }
  if (i>nn){
     cout <<n;
     return;
  }

  while (n!=1){
      for(i=be;i<=nn;i++){
	 if (n%i==0){
	    n=n/i;
	    cout <<" x "<<i;
	    be=i;
	    break;
	 }
      }
      if (i>nn){
	 cout <<" x "<<n;
	 break;
      }
  }
}

void pp2(long n){
  long i;
  long be=2;
  long nn;
  cout <<"-1";
  n=n*-1;
  nn=sqrt(n);
  while (n!=1){
      for(i=be;i<=nn;i++){
	 if (n%i==0){
	    n=n/i;
	    cout <<" x "<<i;
	    be=i;
	    break;
	 }
      }
      if (i>nn){
	 cout <<" x "<<n;
	 break;
      }
  }
}


main(){
   long n;
   long i;

   while (cin >>n,n!=0){
       cout <<n<<" = ";
       if (n>1)
	  pp(n);
       else if (n<0)
	  pp2(n);
       else if (n==1)
	  cout <<"1";
       cout <<"\n";
   }
}