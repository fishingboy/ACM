#include <stdio.h>

void main(){
	long a,b,i,j,value;
	long v[1000],vt;
	while (scanf ("%d %d",&a,&b)!=NULL){
		if (a==0 && b==0) break;
		vt=0;
		value=1;
		for (i=1;i<=b;i++){	
			value=(value*a)%10;
			
			for (j=1;j<=vt;j++) if ( value == v[j]) break;
			printf("i=%d\n",i);
			if (j>vt){
				vt++;
				v[vt]=value;
				printf ("%d %d\n",vt,v[vt]);
			}else{
				printf ("vt=%d\n",vt);
				b=b%vt;
				if (b==0) b=vt;
				break;
			}
		}
		printf("b=%d",b);
		value =1;
		for (i=1;i<=b;i++){	
			value=(value*a)%10;
		}
		printf ("ans=%d\n",value);
	}
}