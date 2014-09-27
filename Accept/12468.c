#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, result;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a == -1) break;
        result = abs(a-b); 
        if (result >= 50)
        {
            result = 100 - result;
        }
        printf("%d\n", result);

    }
    return 0;
}
