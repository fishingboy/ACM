#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int t;
int pri[100];
int prisum[100];

int prime(int n)
{
    int i;
    for (i=2; i<=sqrt(n); i++)
    {
	   if (n % i==0) break;
    }

    if (i > sqrt(n))
	   return 1;
    else
	   return 2;
}

void pp(int n)
{
    int i,j;
    int be=2;
    int nn;

    while (n != 1)
    {
        nn=sqrt(n);
        for(i=be; i<=nn; i++)
        {
            if (n % i == 0)
            {
                for (j=1; j<=t; j++)
                {
                    if (pri[j] == i) prisum[j]++;
                }
                n=n/i;
                be=i;
                break;
            }
        }

        if (i>nn)
        {
            for (j=1;j<=t;j++)
            {
                if (pri[j] == n) prisum[j]++;
            }
            return;
        }
    }
}

main()
{
    int i,j;
    int n;
    int p;

    for (i=2; i<=100; i++)
    {
        if (prime(i) == 1)
        {
            t++;
            pri[t]=i;
        }
    }

    while (cin >> n, n != 0)
    {
        p=0;
        for (i=1; i<=t; i++) prisum[i]=0;
        for (i=2; i<=n; i++)
        {
            pp(i);
        }

        printf("%3d! =",n);
        for (i=1; i<=t; i++)
        {
            if (prisum[i] != 0) 
            {
                printf("%3d",prisum[i]);
                p++;
            }
            if (p == 15 && prisum[i+1] != 0) printf("\n      ");
        }
        printf("\n");
    }
}
