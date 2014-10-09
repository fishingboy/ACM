#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, answer[101]={0};

    for (i=1; i<101; i++)
    {
        answer[i] = answer[i-1] + pow(i, 2);
    }

    while (fscanf(stdin, "%d", &n))
    {
        if (n == 0) break;
        printf("%d\n", answer[n]);
    }
    return 0;
}
