#include <stdio.h>

int main(){
    int i,n;
    double m1,m2,b1,b2;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double x,y;	    
    scanf("%d",&n);
    
    printf("INTERSECTING LINES OUTPUT\n");

    for (i=1;i<=n;i++){
		scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
        scanf("%lf %lf %lf %lf",&x3,&y3,&x4,&y4);

        m1 = (y1-y2)/(x1-x2);
        m2 = (y3-y4)/(x3-x4);
        b1 = y1-(m1*x1);
        b2 = y3-(m2*x3);
		if (x1==x2 && y1==y2 && x3==x4 && y3==y4 && x1==x3 && y1==y3){
			if (x1==x3 && y1==y3){
				printf("POINT %.2lf %.2lf\n",x1,y1);
			}
		}else if (m1 == m2 ){
			if (x1==x2 && y1==y2){
				x = x1;
				if(x3==x4){
					y = y1;	
				}else{
					y = m2 * x  + b2;
				}
				if (y==y1){
					printf("POINT %.2lf %.2lf\n",x,y);
				}else{
					printf("NONE\n");
				}
			    continue;
			}else if(x3==x4 && y3==y4){
				x = x3;
				if (x1==x2){
					y = y3;
				}else{
					y = m1 * x + b1;
				}
				if (y==y3){
					printf("POINT %.2lf %.2lf\n",x,y);
				}else{
					printf("NONE\n");
				}
				continue;
			}

			if (b1==b2){
				printf("LINE\n");
			}else{
				printf("NONE\n");
			}
		}else{
			if (x1==x2){
				x = x1;
				y = m2 * x + b2;
			}else if (x3==x4){
				x = x3;
				y = m1 * x + b1;
			}else{
				y = (b1 * m2 - b2 * m1)/(m2-m1);
				x = (y - b1) / m1;
			}
			printf("POINT %.2lf %.2lf\n",x,y);
        }        
    }

    printf("END OF OUTPUT\n");
}

