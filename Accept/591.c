#include <stdio.h>

int main(){
    int i,n,total,avg,sum,t=0;
    int a[100];
    while  (scanf("%d",&n),n!=0){
         total=avg=sum=0;
         t++;
         for (i=1;i<=n;i++){

            scanf("%d",&a[i]);
            total=total+a[i];
         }
         avg=total/n;


         for (i=1;i<=n;i++){
             if (a[i]>avg){
                sum=sum+(a[i]-avg);
             }
         }
         printf("Set #%d\n",t);
         printf("The minimum number of moves is %d.\n\n",sum);
    }
	return 0;
}