#include <stdio.h>

int main()
{
    int i, n, e, f, c, sum, result;
        
    fscanf(stdin, "%d", &n);
    for (i=0; i<n; i++)
    {
        fscanf(stdin, "%d %d %d", &e, &f, &c);
        sum = e + f;
        result = 0;
        while (sum >= c)
        {
            result += sum / c;
            sum = (sum / c) + (sum % c);
        }
        printf("%d\n", result);
    }
    return 0;
}
