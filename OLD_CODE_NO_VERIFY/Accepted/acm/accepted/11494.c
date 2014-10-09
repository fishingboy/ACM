#include <stdio.h>
#include <math.h>

int main ()
{
    int x1, y1, x2, y2, d1, d2;
    while (fscanf(stdin, "%d %d %d %d", &x1, &y1, &x2, &y2))
    {
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;

        d1 = abs(x1-x2);
        d2 = abs(y1-y2);
    
        if (d1 == 0 && d2 == 0)
            printf("0\n");
        else if (d1 == d2 || d1 == 0 || d2 == 0)
            printf("1\n");
        else
            printf("2\n");          
    }
    return 0;
}
