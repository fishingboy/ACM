#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long int sp1, sp2;
long long int be;
long long int a[10000] = {0};
char nth[3];

/* push min heap */
void push(long long int x)
{
    long i;
    for (i = sp1; i >= sp2; i--)
    {
        if (a[i] == x) break;
    }
    if (i < sp2)
    {
        sp1++;
        a[sp1] = x;
    }
}

/* get min heap */
long long int pop(void)
{
    long long int min, mini, p;
    int i;

    min = a[sp2];
    mini = sp2;
    for (i = sp2; i <= sp1; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            mini = i;
        }
    }
    /* swap mini with sp2 */
    p = a[mini];
    a[mini] = a[sp2];
    a[sp2] = p;
    sp2++;
    return min;
}

void find_nth(long long int n)
{
    if (n % 100 != 11 && n % 100 != 12 && n % 100 != 13)
    {
        if (n % 10 == 1)
        {
            strcpy(nth, "st");
        }
        else if (n % 10 == 2)
        {
            strcpy(nth, "nd");
        }
        else if (n % 10 == 3)
        {
            strcpy(nth, "rd");
        }
        else
        {
            strcpy(nth, "th");
        }
    }
    else
    {
        strcpy(nth, "th");
    }
}

int main()
{
    long long int ans[6000];
    long long int t = 0;
    int i, n = 5842, max;

    be = 0;
    sp1 = sp2 = 1;
    a[1] = 1;

    for (i = 1; i <= n; i++)
    {
        t++;
        ans[t] = pop();
        push(ans[t]*2);
        push(ans[t]*3);
        push(ans[t]*5);
        push(ans[t]*7);
    }

    while (scanf("%d", &n) == 1 && n != 0)
    {
        find_nth(n);
        printf("The %d%s humble number is %d.\n", n, nth, ans[n]);
    }
    return 0;
}