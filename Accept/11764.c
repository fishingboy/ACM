#include <stdio.h>

int main()
{
    int t, n, height, prev_height, i, j;
    int high_jump, low_jump;

    scanf("%d", &t);
    for (i=0; i<t; i++)
    {
        scanf("%d", &n);
        high_jump = low_jump = 0;
        for (j=0; j<n; j++)
        {
            scanf("%d", &height);
            if (j > 0)
            {
                if (height > prev_height) high_jump++;
                if (height < prev_height) low_jump++;
            }
            prev_height = height;
        }
        printf("Case %d: %d %d\n", i+1, high_jump, low_jump);
    }

    return 0;
}
