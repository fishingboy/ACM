#include <stdio.h>

int main()
{
    int n, i, j, k, double_n, odd_sum, even_sum;
    char tmp[5];

    fscanf(stdin, "%d", &n);
    for (i=0; i<n; i++)
    {
        odd_sum = even_sum = 0;
        for (j=1; j<=4; j++)
        {
            fscanf(stdin, "%s", tmp);
            for (k=0; k<4; k++)
            {
                if (k % 2 == 0)
                {
                    double_n = (tmp[k] - 48) * 2;
                    even_sum += (double_n / 10) + (double_n % 10);
                }
                else
                {
                    odd_sum += tmp[k]-48;
                }
            }
        }
        if ((odd_sum+even_sum)%10 != 0)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
    return 0;
}
