#include <stdio.h>

int main()
{
    int t, m, d, day[13][32], i, j, week;
    int month_length[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char day_name[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    /* 2010-12-31 = Friday(5) */
    week = 5;
    for (i=1; i<=12; i++)
    {
        for (j=1; j<=month_length[i]; j++)
        {
            week = (week + 1) % 7;
            day[i][j] = week;
        }
    }

    fscanf(stdin, "%d", &t);
    for (i=0; i<t; i++)
    {
        fscanf(stdin, "%d %d", &m, &d);
        printf("%s\n", day_name[day[m][d]]);
    }
    return 0;
}
