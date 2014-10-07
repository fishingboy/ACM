#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    long q,s;
    long d,tall,t;
    long i,j,n;
    long total,totalsum;

	while (cin >>q>>s)
	{
		if (q==0 && s==0 ) break;
		if (q-1 == s)
		{
			cout << "1 " << q+s << "\n";
			continue;
		}

		for (i=2;i<=sqrt(q);i++)
		{
			tall=q;
			t=0;
			while (1)
			{
				t++;
				d=tall%i;
				if (d!=0) break;
				tall=tall/i;
				if (tall==1 && pow(i-1,t)==s )
				{
					//ans!
					n=i-1;
					tall=q;
					total=totalsum=0;
					for (j=1;j<=t;j++)
					{
						tall= q /(long)( pow(n+1,j-1));
						total=total+ (long)pow(n,j-1);
						totalsum=totalsum+tall* (long)pow(n,j-1);
					}
					totalsum=totalsum+s;
					break;
				}
			}
		}
		cout <<total<<" "<<totalsum<<"\n";
	}
    return 0;
}
