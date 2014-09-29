#include <stdio.h>
#include <string.h>

char p[1000];

void perm(int x)
{
    int i,j,oldt=0;
	char temp,old[1000];
    if ( x>=strlen(p) )
    {
		printf("%s\n",p);
    }
    else
    {		
        for (i=x;i<strlen(p);i++)
        {
            for (j=1;j<=oldt;j++) if (old[j]==p[i]) break;
			if (j>oldt)
            { 
				oldt++;
				old[oldt]=p[i];

				temp=p[i];
				for (j=i;j>=x+1;j--) p[j]=p[j-1];
				p[x]=temp;
				
				perm(x+1);

				temp=p[x];
				for (j=x;j<=i-1;j++) p[j]=p[j+1];
				p[i]=temp;				
			}
		}
    }    
}

void sort_str()
{
    int len, i, j;
    char temp;

    len = strlen(p);
    for (i=0; i<len-1; i++)
    {
        for (j=i+1; j<len; j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int main()
{
    int i,t;
	fscanf(stdin, "%d",&t);
    
	for (i=1;i<=t;i++)
    {
	    fscanf(stdin, "%s",p);
        sort_str();
		perm(0);
		printf("\n");
	}	
	return 0;
}
