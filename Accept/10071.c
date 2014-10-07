#include <stdio.h>
#include <math.h>

int main()
{
    long v,t;
    while (scanf("%ld %ld",&v,&t)==2)
    {
       printf("%ld\n",v*t*2);
    }
    return 0;
}