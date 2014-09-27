#include<stdio.h>
#include<math.h>
int main(){
    double a=2, b=3,temp;
    double ans1,ans2;
    int i;
    for (i=1;i<=10;i++){
        ans1=a*b;
        ans2=(-1+pow((1+8*pow(a*b,2)),0.5))/2;
        printf("%*.*f%*.*f\n",10,0,ans1,10,0,ans2);
        temp=a;
        a+=b;
        b+=2*temp;
    }
	return 0;
}
