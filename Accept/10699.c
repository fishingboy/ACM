#include <stdio.h>
#include <math.h>

int main()
{
    long i, n, nn, pt, j;
    long prev;
    
    
    while (scanf("%ld", &n) == 1, n != 0)
    {
        pt = 0;
        j = 2;
        nn = n;
        prev = 0;

        while (nn > 1)
        {
            if (j > nn / 2)
            {
               pt += 1;
               break;
            }
            
            if (nn % j == 0)
            {
                if (prev != j) pt++;
                nn /= j;
                prev = j;
            }
            else
            {
                j++;
            }
        }
        printf("%ld : %ld\n", n, pt);
    }
    return 0;
}
