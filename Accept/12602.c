#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void substr(char *dest, const char* src, unsigned int start, unsigned int cnt) 
{
    strncpy(dest, src + start, cnt);
    dest[cnt] = 0;
}

int main()
{
    int i, j, n;
    char car_number[8], back_number[5];
    double x, result_a, result_b;
    
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%s", &car_number);
        result_a = result_b = 0;
        for (j = 0; j < 3; j++)
        {
            x = pow(26.0, 2.0-j);
            result_a += (car_number[j] - 'A') * x;
        }

        substr(back_number, car_number, 4, 4);
        result_b = atof(back_number);

        if (abs(result_a - result_b) <= 100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }

    return 0;
}
